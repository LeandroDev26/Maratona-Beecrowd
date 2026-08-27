#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> fibonacci;
    int n, atual = 0 ;
    cin>> n;
    if(n == 1)
    {
        fibonacci[0] = 1;

    }
    else
    {
        fibonacci[0] = 1;
        fibonacci[1] = 1;
        if(n == 2)
        {
            cout<<fibonacci[1] <<" " << fibonacci[0]<<" " <<endl;
        }

    }
    for(int i = 2 ; i < n; i++)
    {

        atual = (fibonacci[i-1] + fibonacci[i-2]);
        fibonacci.push_back(atual);
    }


    for(int j = n-1; j >= 0; j--)
    {
        cout<<fibonacci[j]<<" ";
    }

    cout<<endl;


    return 0;
}
