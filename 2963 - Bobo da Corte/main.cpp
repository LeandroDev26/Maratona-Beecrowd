#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, xi ;
    vector<int> listaDeCandidatos;
    cin>> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> xi;
        listaDeCandidatos.push_back(xi);

    }
    bool foiEleito = true;
    int carlos = listaDeCandidatos[0];
    for(int j = 1; j < n; j++)
    {
        if(carlos >= listaDeCandidatos[j])continue;
        foiEleito = false;
    }

    if(foiEleito)
    {
        cout<<"S"<<endl;
    }
    else
    {
        cout<<"N"<<endl;
    }







    return 0;
}
