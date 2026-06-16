#include <iostream>
#include <string>

using namespace std;

int main()
{
    int par = 0;
    string s ;
    cin>> s;

    for(int i = 0; i < s.length(); i++)
    {
        if( s[i] == 1)
        {
            par++;
        }

    }

     if(par % 2 == 1){
        cout<< s + 1 <<endl;
     }





    return 0;
}
