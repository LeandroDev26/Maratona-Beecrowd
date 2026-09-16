#include <iostream>

using namespace std;

int main()
{
    int v, n, totplacas;
    cin >> v >> n;
    totplacas = v * n;

    for(int i = 1; i <= 9; i++)
    {
        int alvo = (totplacas * i + 9) / 10;

        if(i < 9)
        {
            cout << alvo << " ";
        }
        else
        {
            cout << alvo << endl;
        }
    }

    return 0;
}
