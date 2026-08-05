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

        break;

    case 6:

        break;

    case 7:

        break;

    case 8:

        break;

    case 9:

        break;







    }









    return 0;
}
