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
            cout<<"Iron Maiden's gonna get you, no matter how far!"<<endl;
        }
        else if(dodo == "tesoura" && leo == "tesoura" && pep == "pedra")
        {
            cout<<"Urano perdeu algo muito precioso..."<<endl;
        }
        // pedra
        if(dodo == "tesoura" && leo == "papel" && pep == "papel")
        {
            cout<<"Os atributos dos monstros vao ser inteligencia, sabedoria..."<<endl;
        }
        else if(dodo == "tesoura" && leo == "pedra" && pep == "tesoura")
        {
            cout<<"Iron Maiden's gonna get you, no matter how far!"<<endl;
        }
        else if(dodo == "tesoura" && leo == "tesoura" && pep == "pedra")
        {
            cout<<"Urano perdeu algo muito precioso..."<<endl;
        }


    }



    return 0;
}
