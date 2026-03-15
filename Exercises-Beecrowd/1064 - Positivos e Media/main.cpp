#include <iostream>

using namespace std;

int main()
{
    int positivo = 0, media = 0;
    double a = 0.0;
    for(int i = 0 ; i < 6; i++)
    {
        cin>> a;
        if(a > 0)
        {
            media += a;
            positivo++;
        }


    }

    cout<< positivo << " valores positivos"<<endl;

    return 0;
}
