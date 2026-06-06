#include <iostream>

using namespace std;

int main()
{

    int s = 0, t = 0, f = 0, c = 0;
    // saida , tempo de viagem , fusuorário , chegada
    cin>> s >> t >> f;

    if( s == 0)
    {
        c = (24 + ( t + f));
        cout<< c<<endl;
    }
    else if( s > 0 )
    {
        c = 0;
        c =(s + t + f);
        if(c <= 23)
        {
            cout<< c <<endl;
        }
    }












    return 0;
}
