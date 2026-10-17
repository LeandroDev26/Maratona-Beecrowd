#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <set>

using namespace std;

// Problema com ambiguidade na desrição solução correta a seguir
vector<string> dict = {
    "captain", "avenge", "parrot", "sable", "blood", "ship",
    "hook", "dead", "will", "rum", "our", "be"
};

vector<string> cipher_words;
vector<string> UCW;          // palavras cifradas únicas
int total_unique_chars;

char c2p[256];
char p2c[256];
set<string> valid_sentences;

void rollback(const vector<pair<char, char>>& added) {
    for (auto& ap : added) {
        c2p[(unsigned char)ap.first] = 0;
        p2c[(unsigned char)ap.second] = 0;
    }
}

// Tenta casar c_word com p_word, letra por letra, mantendo a injetividade.
// Se falhar, desfaz tudo o que foi adicionado e retorna false.
bool can_map(const string& c_word, const string& p_word, vector<pair<char, char>>& added) {
    for (size_t i = 0; i < c_word.length(); ++i) {
        unsigned char c = c_word[i];
        unsigned char p = p_word[i];
        if (c2p[c] == 0 && p2c[p] == 0) {
            c2p[c] = p;
            p2c[p] = c;
            added.push_back({(char)c, (char)p});
        } else if (c2p[c] != (char)p || p2c[p] != (char)c) {
            rollback(added);
            added.clear();
            return false;
        }
    }
    return true;
}

void solve(size_t dict_idx, int mapped_count) {
    if (valid_sentences.size() > 1) return; // já é ambíguo

    if (mapped_count == total_unique_chars) {
        string res;
        for (size_t i = 0; i < cipher_words.size(); ++i) {
            for (char c : cipher_words[i]) res += c2p[(unsigned char)c];
            if (i + 1 < cipher_words.size()) res += " ";
        }
        valid_sentences.insert(res);
        return; // mapeamento completo: novas associações não mudam a frase
    }

    if (dict_idx == dict.size()) return;

    // Opção 1: a palavra do dicionário não aparece no texto
    solve(dict_idx + 1, mapped_count);

    // Opção 2: a palavra do dicionário corresponde a alguma palavra cifrada
    for (size_t j = 0; j < UCW.size(); ++j) {
        if (UCW[j].length() != dict[dict_idx].length()) continue;
        vector<pair<char, char>> added;
        if (can_map(UCW[j], dict[dict_idx], added)) {
            solve(dict_idx + 1, mapped_count + (int)added.size());
            rollback(added);
        }
        if (valid_sentences.size() > 1) return;
    }
}

void process(string line) {
    if (!line.empty() && line.back() == '\r') line.pop_back();
    if (line.empty()) return;

    cipher_words.clear();
    UCW.clear();
    valid_sentences.clear();

    for (int i = 0; i < 256; ++i) {
        c2p[i] = 0;
        p2c[i] = 0;
    }

    set<char> u_chars;
    set<string> seen;
    stringstream ss(line);
    string w;

    while (ss >> w) {
        cipher_words.push_back(w);
        if (seen.insert(w).second) UCW.push_back(w);
        for (char c : w) u_chars.insert(c);
    }

    if (cipher_words.empty()) return;
    total_unique_chars = (int)u_chars.size();

    solve(0, 0);

    if (valid_sentences.size() == 1) {
        cout << *valid_sentences.begin() << "\n";
    } else {
        cout << "Impossible\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string line;
    while (getline(cin, line)) {
        process(line);
    }
    return 0;
}
