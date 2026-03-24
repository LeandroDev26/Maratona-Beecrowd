#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double nota = 0, media = 0, cont = 0;
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

        if(cont == 2){
            media /= 2;
             cout<<"media = "<<media<<endl;
        }

    }




    return 0;
}
