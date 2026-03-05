#include <iostream>

using namespace std;

int main()
{
    int hi, hf, mi, mf, hr, mt;

    cin>> hi >> mi >> hf >> mf;



    if( hi == hf && mi == mf)
    {
        cout<< "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    else if(hi > hf && mi > mf)
    {
        hr = hi - hf ;
        mt = mi - mf;
        cout<< "O JOGO DUROU "<< hr << " HORA(S) E " << mt <<" MINUTO(S)"<< endl;

    }
    else
    {
        hr = (24 - hi) + hf;
        mt = (60 - mi) + mf;
        cout<< "O JOGO DUROU "<< hr << " HORA(S) E " << mt <<" MINUTO(S)"<< endl;

    }


    return 0;
}
