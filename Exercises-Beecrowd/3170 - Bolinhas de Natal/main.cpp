#include <iostream>

using namespace std;

int main()
{

    int b, g, totbolinhas;
    cin>> b >> g;
    totbolinhas = g/2;
    if(totbolinhas % 2 == 1)
    {
        totbolinhas--;
    }

    if(totbolinhas > b)
    {
        cout<< " Faltam "<< totbolinhas-b<<" bolinha(s)"<<endl;
    }







    return 0;
}
