#include <iostream>

using namespace std;

int main()
{

    int t, r, g, b;
    string conversao;
    cin>> t ;

    for(int i = 0 ; i < t; i++)
    {
        cin>> conversao >> r >> g >> b;

        if(conversao == "min")
        {
            int mini = 1000;

            if(r < mini)
            {
                mini = r;
            }
            if(g < mini)
            {
                mini = g;
            }
            if(b < mini)
            {
                mini = b;
            }

            cout<<"Caso #"<< i <<": "<< mini <<endl;
        }
        else if(conversao ==  "mean")
        {
            int media = 0;
            media = (r + g + b)/3;
            cout<< "Caso #"<< i <<": "<< media<<endl;
        }
    }

    return 0;
}
