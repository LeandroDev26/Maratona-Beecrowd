#include <iostream>

using namespace std;

int main()
{
    int H, E, A, O, W, X;
    if (!(cin >> H >> E >> A >> O >> W >> X)) return 0;

    int bem_inicial = H + E + A;
    int mal = O + W;

    if (bem_inicial > mal)
    {
        cout << "Middle-earth is safe." << endl;
    }
    else
    {
        int bem_com_aguias = bem_inicial + X;

        if (bem_com_aguias >= mal)
        {
            cout << "Middle-earth is safe." << endl;
        }
        else
        {
            cout << "Sauron has returned." << endl;
        }
    }

    return 0;
}
