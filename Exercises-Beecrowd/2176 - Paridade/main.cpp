#include <iostream>
#include <string>

using namespace std;

int main()
{
    int par = 0, impar = 0;
    string s ;
    cin>> s;

    for(int i = 0; i < s.length(); i++)
    {
        if( s[i] == 1)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }






    return 0;
}
