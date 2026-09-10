#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int e, d;

    cin>> e >> d ;

    int diferenca = abs(e - d);
    if(diferenca >= 3)
    {
        cout<< "Muito bem! Apresenta antes do Natal!"<<endl;
    }
    else if( diferenca < 3)
    {
        cout<<"Parece o trabalho do meu filho!"<<endl;

        int distanciaNatal = e + 2;

        if(distanciaNatal < 24)
        {
            cout<<"TCC Apresentado!"<<endl;
        }
        else
        {
            cout<<"Fail! Entao eh nataaaaal!"<<endl;
        }

    }
    else
    {
        cout<<"Eu odeio a professora!"<<endl;
    }

    return 0;
}
