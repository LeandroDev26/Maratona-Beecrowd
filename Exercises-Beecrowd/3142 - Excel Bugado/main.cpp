#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    while(cin >> s)
    {
        long long total = 0;
        for(int i = 0; i < s.length(); i++)
        {
            int valor = s[i] - 'A' + 1;
            total = (total * 26) + valor;
        }

        if(total > 16384)
        {
            cout << "Essa coluna nao existe Tobias!\n";
        }
        else
        {
            cout << total << '\n';
        }
    }

    return 0;
}
