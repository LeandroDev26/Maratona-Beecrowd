#include <iostream>
#include <cmath>
using namespace std;

int main()
{


    char col1, col2;
    int lin1, lin2;

    cin>> col1 >> lin1 >> col2 >> lin2;

    int difeColuna = abs(col1 - col2);
    int difeLinha = abs(lin1 - lin2);


    return 0;
}
