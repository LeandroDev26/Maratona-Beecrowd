#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int total_casas;
vector<int> demanda;
vector<int> capacidade_cabo;
vector<vector<int>> filhos;

vector<int> resolver_subarvore(int no_atual)
{
    vector<int> todas_demandas;


    for (int filho : filhos[no_atual])
    {
        vector<int> demandas_filho = resolver_subarvore(filho);
        for (int d : demandas_filho)
        {
            todas_demandas.push_back(d);
        }
    }

    if (no_atual != 0)
    {
        todas_demandas.push_back(demanda[no_atual]);
    }

    sort(todas_demandas.begin(), todas_demandas.end());

    long long limite_capacidade = (no_atual == 0 ? 2e18 : capacidade_cabo[no_atual]);

    long long soma_atual = 0;
    vector<int> demandas_atendidas;
    for (int d : todas_demandas)
    {
        if (soma_atual + d <= limite_capacidade)
        {
            soma_atual += d;
            demandas_atendidas.push_back(d);
        }
        else
        {
            break;
        }
    }

    return demandas_atendidas;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> total_casas)) return 0;

    demanda.resize(total_casas + 1);
    capacidade_cabo.resize(total_casas + 1);
    filhos.assign(total_casas + 1, vector<int>());

    for (int i = 1; i <= total_casas; ++i)
    {
        int casa_pai, r, c;
        cin >> casa_pai >> r >> c;
        demanda[i] = r;
        capacidade_cabo[i] = c;
        filhos[casa_pai].push_back(i);
    }

    vector<int> resultado_final = resolver_subarvore(0);

    cout << resultado_final.size() << "\n";

    return 0;
}
