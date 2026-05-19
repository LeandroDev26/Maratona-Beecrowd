#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sheldon;
    string raj;
    char lixo;
    int t ;

    cin>> t;
    for(int i = 0; i < t; i++)
    {
        cin>> sheldon >> raj;

        if( sheldon == raj)
        {
            cout<<"Caso #" << i <<": De novo!"<<endl;
        }
    }






    return 0;
}
