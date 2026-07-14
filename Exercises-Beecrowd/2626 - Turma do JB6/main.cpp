#include <iostream>
#include <string>
using namespace std;

int main()
{

    string dodo, leo, pep;
    while(cin>> dodo >> leo >> pep)
    {
        if(dodo == "pedra" && leo == "tesoura" && pep == "tesoura")
        {
            cout<<"Os atributos dos monstros vao ser inteligencia, sabedoria..."<<endl;
        }
        else if(dodo == "tesoura" && leo == "pedra" && pep == "tesoura")
        {
        }

    }



    return 0;
}
