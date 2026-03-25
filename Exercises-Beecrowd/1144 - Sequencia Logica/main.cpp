#include <iostream>

using namespace std;

int main()
{
    int n, num = 1;
    cin>> n ;
    n = n*2;

    for(int i = 0 ; i < n; i++)
    {
        cout<< num <<" "<<(num * num)<< " " << (num* num * num)<<endl;
    }



    return 0;
}
