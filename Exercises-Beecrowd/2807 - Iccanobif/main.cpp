#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> fibonacci;
    int n, atual = 0 ;
    cin>> n;
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    for(int i = 1 ; i < n; i++)
    {

        atual += (fibonacci[i-1] + fibonacci[i]);
        fibonacci.push_back(atual);
    }

    if(n == 1)
    {
        cout<< 1 <<endl;
    }



    return 0;
}
