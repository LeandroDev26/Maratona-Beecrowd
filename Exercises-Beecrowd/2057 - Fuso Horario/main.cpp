#include <iostream>

using namespace std;

int main()
{

    int s, t, f, c;
    // saida , tempo de viagem , fusuorário , chegada
    cin>> s >> t >> f;

    c = (s + t + f);

    if(c == 24)
    {
        cout<<"0"<<endl;
    }
    else if (c > 24)
    {
        c -= 24;
        cout<< c <<endl;
    }
    else
    {
        cout<< c <<endl;
    }











    return 0;
}
