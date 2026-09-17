#include <iostream>

using namespace std;

int main()
{

    int n, x, d;
    cin>> n ;

    for(int i = 0 ; i < n ; i++)
    {
        int joao = 0, maria = 0;

        for(int j = 0 ; j < 3 ; j++)
        {
            cin>> x >> d;
            joao += (x*d);

        }

        for(int j = 0 ; j < 3 ; j++)
        {
            cin>> x >> d;
            maria += (x*d);

        }

        if(joao > maria)
        {
            cout<< "JOAO"<<endl;
        }
        else if(maria > joao)
        {
            cout<< "MARIA" <<endl;
        }
    }





    return 0;
}
