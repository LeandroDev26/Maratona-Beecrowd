#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double nota = 0, media = 0;
    cout<< fixed << setprecision(2);

    while (1)
    {
        cin>> nota;

        if( nota >= 0 && nota<= 10)
        {
            media+= nota;

        }
        else
        {
            cout<<"nota invalida"<<endl;
        }

    }

    media /= 2;
    cout<<"media = "<<media<<endl;



    return 0;
}
