#include <iostream>

using namespace std;

int main()
{

    int idade = 0, cont = 0;
    double media = 0.0;

    cin>> idade;
    media += idade;
    cont++;

    while(idade >= 0)
    {

        cin>> idade;
        media += idade;
        cont++;



    }

    cout<< (media/cont)<<endl;





    return 0;
}
