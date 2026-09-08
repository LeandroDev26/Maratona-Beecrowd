#include <iostream>

using namespace std;

int main()
{
    int t ;
    double num;
    while (cin>> t)
    {
        double menor = 111;
        for(int i = 0; i < t; i++)
        {
            cin>> num;
            if(num < menor)
            {
                menor = num;
            }
        }

    }





    return 0;
}
