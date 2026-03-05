#include <iostream>

using namespace std;

int main()
{
    int hi, hf, mi, mf, hr, mt;

    cin>> hi >> mi >> hf >> mf;

    hi = (hi * 60) + mi;
    hf = (hf * 60) + mf;

    hr = hf - hi;

    if(hr <= 0)
    {

        hr += 1440;
    }
    /*
        if( hi == hf && mi == mf)
        {
            cout<< "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
        }
        else if(hf > hi && mf > mi)
        {
            hr = hf - hi ;
            mt = mf - mi;
            cout<< "O JOGO DUROU "<< hr << " HORA(S) E " << mt <<" MINUTO(S)"<< endl;

        }
        else
        {
            hr = (24 - hi) + hf;
            mt = (60 - mi) + mf;
            cout<< "O JOGO DUROU "<< hr << " HORA(S) E " << mt <<" MINUTO(S)"<< endl;

        }

    */
    return 0;
}
