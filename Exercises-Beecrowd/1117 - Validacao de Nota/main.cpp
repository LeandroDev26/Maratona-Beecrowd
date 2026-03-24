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




    return 0;
}
