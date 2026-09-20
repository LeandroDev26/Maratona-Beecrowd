#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int m;
    int teste = 1;

    while (cin >> m && m != 0) {
        string expressao;
        cin >> expressao;

        stringstream ss(expressao);
        int resultado = 0;
        int numero;
        char operador;

        ss >> resultado;

        while (ss >> operador >> numero) {
            if (operador == '+') {
                resultado += numero;
            } else if (operador == '-') {
                resultado -= numero;
            }
        }

        cout << "Teste " << teste++ << endl;
        cout << resultado << endl;
        cout << endl;
    }

    return 0;
}
