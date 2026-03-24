#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double nota, media, cont = 0;
    cout<< fixed << setprecision(2);

    while (cont <= 2)
    {
        cin>> nota;

        if( a >= 0 && a<= 10)
        {
            media+= a;
            cont++;


            cin>> b;

            if( b >= 0 && b <= 10)
            {
                media += b;
                media /= 2;
                cout<<"media = "<< media <<endl;
                cont++;

            }
            else
            {
                cout<<"nota invalida"<<endl;
            }
        }
        else
        {
            cout<<"nota invalida"<<endl;
        }


    }




    return 0;
}
