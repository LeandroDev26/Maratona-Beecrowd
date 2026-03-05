#include <iostream>

using namespace std;

int main()
{
    int hi, hf, hr;

    hr = (24 - hi) - (24 - hf);

    cin>> hi >> hf;

    if(hi == 0 && hf == 0)
    {
        cout<< "O JOGO DUROU " << 24 <<" HORA(S)" << endl;
    }
    else
    {

        cout<< "O JOGO DUROU " << hr <<" HORA(S)" << endl;

    }



    return 0;
}
