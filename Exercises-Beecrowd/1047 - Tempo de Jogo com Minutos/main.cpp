#include <iostream>

using namespace std;

int main()
{
    int hi, hf, mi, mf, hr , mt;

    cin>> hi >> mi >> hf >> mf;



   if( hi == hf && mi == mf)
    {
        cout<< "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    else if(hi > hf && mi > mf)
    {
        hr = hf - hi ;
        mt = mi - mf;
        cout<< "O JOGO DUROU "<< hr << " HORA(S) E " << mt<<" MINUTO(S)"<< endl;

    }
    else
    {
        hr = (24 - hi) + hf;
        cout<< "O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)" << endl;

    }


    return 0;
}
