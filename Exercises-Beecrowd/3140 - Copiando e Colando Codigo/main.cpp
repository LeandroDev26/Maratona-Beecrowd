#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    string texto ;
    vector<string> Texto;

    while (getline(cin ,texto) )
    {
        Texto.push_back(texto);


    }
    return 0;
}
