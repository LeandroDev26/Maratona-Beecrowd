#include <iostream>

using namespace std;

int main()
{
    int hi, hf, mi, mf, tm;

    cin>> hi >> mi >> hf >> mf;

    tm = (hi * 60) + mi;
    tm = (hf * 60) + mf;

    tm = hf - hi;

    if(tm <= 0)
    {

        tm += 1440;
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
