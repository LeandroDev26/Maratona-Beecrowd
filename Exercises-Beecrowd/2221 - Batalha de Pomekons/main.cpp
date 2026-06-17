#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int t, b, Ai, Di, Li;
    cin>> t ;
    vector<int> golpes;

    for(int i = 0 ; i < t; i++)
    {
        int valorGolpe = 0;
        cin>> b >> Ai >> Di >> Li;

        if(Li % 2 == 0)
        {
            valorGolpe = ((Ai + Di)/2) + b;

        }
        else
        {
            valorGolpe = (Ai + Di)/2;

        }

        golpes.push_back(valorGolpe);


    }

    // dabriel = 0 guarte = 1
    if(golpes[0] > golpes[1])
    {
        cout<<"Dabriel"<<endl;
    }
    else if(golpes[0] < golpes[1])
    {
        cout<<"Guarte"<<endl;
    }
    else
    {
        cout<<"Empate"<<endl;
    }



    return 0;
}
