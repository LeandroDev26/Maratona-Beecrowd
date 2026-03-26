#include <iostream>

using namespace std;

int main()
{

    int x, y, cont =0;
    cin>> x >> y;
    for(int i = 1; i <= y; i++)
    {
        cout<< i << " ";
        cont++;
        if(cont == x)
        {
            cout<<endl;


        }
    }


    return 0;
}
