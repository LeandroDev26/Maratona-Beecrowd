#include <iostream>

using namespace std;

int main()
{

    int n;
    int pilhaNeve = 0;
    for(int i = 0; i < 9; i++)
    {
        cin>> n;
        pilhaNeve += n;
    }

    while(pilhaNeve > 9)
    {
        if( (pilhaNeve % 9) < 9)
        {
            break;
        }
        else
        {
            pilhaNeve /= 9;
        }
    }

    switch(pilhaNeve)
    {
    case 0:
        cout<<"Rudolph"<<endl;
        break;

    case 1:
        cout<<"Dasher"<<endl;
        break;

    case 2:
        cout<<"Dancer"<<endl;
        break;

    case 3:
        cout<<"Prancer"<<endl;
        break;

    case 4:
        cout<<"Vixen"<<endl;
        break;

    case 5:
        cout<<"Comet"<<endl;
        break;

    case 6:
        cout<<"Cupid"<<endl;
        break;

    case 7:
        cout<<"Donner"<<endl;
        break;

    case 8:
        cout<<"Blitzen"<<endl;
        break;

    case 9:
        cout<<"Rudolph"<<endl;
        break;







    }









    return 0;
}
