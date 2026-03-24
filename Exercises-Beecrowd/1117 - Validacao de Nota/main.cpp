#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double a, b, media , cont = 0;
    cout<< fixed << setprecision(2);

    while (cont == 2)
    {
        cin>> a;

        if( a >= 0 && a<= 10)
        {

        }
        else
        {
            cout<<"nota invalida"<<endl;
        }

          cin>> b;

            if( b >= 0 && b <= 10)
            {
                media = (a+b)/2;
                cout<<"media = "<< media <<endl;
                break;


            }
            else
            {
                cout<<"nota invalida"<<endl;
            }

    }




    return 0;
}
