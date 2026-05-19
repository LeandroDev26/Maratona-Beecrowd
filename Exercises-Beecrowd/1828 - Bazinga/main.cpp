#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sheldon;
    string raj;
    int t ;

    cin>> t;
    for(int i = 0; i < t; i++)
    {
        cin>> sheldon >> raj;

        if( sheldon == raj)
        {
            cout<<"Caso #" << i+1 <<": De novo!"<<endl;
        }
        else if(sheldon == "pedra" && raj == "lagarto" || raj == "tesoura")
        {

            cout<<"Caso #" << i+1 <<": Bazinga!"<<endl;


        }
        else
        {
            cout<<"Caso #" << i+1 <<": Raj trapaceou!"<<endl;

        }
    }






    return 0;
}
