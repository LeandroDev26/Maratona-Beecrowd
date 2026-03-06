#include <iostream>

using namespace std;

int main()
{
    int hi, hf, mi, mf, tm , hr , mt;

    cin>> hi >> mi >> hf >> mf;

    tm = (hi * 60) + mi;
    tm = (hf * 60) + mf;

    tm = (hf - hi);

    if(tm <= 0)
    {

        tm += 1440;
    }

    hr = (tm / 60);
    mt = (tm % 60);

    cout<< "O JOGO DUROU "<< hr << " HORA(S) E " << mt <<" MINUTO(S)"<< endl;

    return 0;
}
