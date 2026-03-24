#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double nota = 0, media = 0, cont = 0;
    int opc = 0;
    cout<< fixed << setprecision(2);

    while (cont < 2)
    {
        cin>> nota;

        if( nota >= 0 && nota<= 10)
        {
            media+= nota;
            cont++;

        }
        else
        {
            cout<<"nota invalida"<<endl;
        }

    }

    media /= 2;
    cout<<"media = "<<media<<endl;


    cout<< "novo calculo (1-sim 2-nao)"<<endl;
    cin>> opc;

    cont = 0;
    while (cont < 2)
    {
        if(opc == 2)
        {
            break;
        }
        else if(opc == 1)
        {
            cin>> nota;

            if( nota >= 0 && nota<= 10)
            {
                media+= nota;
                cont++;

            }
            else
            {
                cout<<"nota invalida"<<endl;
            }

        }
    }

    media /= 2;
    cout<<"media = "<<media<<endl;


    return 0;

}














