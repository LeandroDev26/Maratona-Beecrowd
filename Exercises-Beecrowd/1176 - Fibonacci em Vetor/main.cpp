#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n, a = 0, b = 1, aux = 0;
    vector<int> fibonacci;

    for ( int k = 0 ; k < n; k++)
    {

        if( k == n-1)
        {
            fibonacci.push_back(a);
        }
        else
        {
            aux = a;
            a = b;
            b += aux;
        }
    }


    cin>> t;

    for(int i = 0; i < t; i++)
    {
        cin>> n;



    }


    for(int j = 0 ; j < fibonacci.size(); j++)
    {
        cout<<"Fib(" << j << ")"<< " = " << fibonacci[j]<<endl;
    }






    return 0;
}
