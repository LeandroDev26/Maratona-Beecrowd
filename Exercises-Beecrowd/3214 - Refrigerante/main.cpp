#include <iostream>

using namespace std;

int main()
{


    int e, f, c, totBebi = 0, garrafasVazias = 0;
    cin>> e >> f >> c;
    garrafasVazias = e + f;

    while(garrafasVazias >= c)
    {
        totBebi += (garrafasVazias/c);
        int resto = garrafasVazias%c;
        garrafasVazias = totBebi + resto;

    }
    cout<< totBebi <<endl;







    return 0;
}
