#include <iostream>

using namespace std;

int main()
{

    int t, b, Ai, Di, Li;
    cin>> t ;

    for(int i = 0 ; i < t; i++)
    {
        cin>> b >> Ai >> Di >> Li;

        if(Li % 2 == 0)
        {
            int valorGolpe = ((Ai + Di)/2) + b;

        }
        else
        {
            int valorGolpe = (Ai + Di)/2;

        }

    }



    return 0;
}
