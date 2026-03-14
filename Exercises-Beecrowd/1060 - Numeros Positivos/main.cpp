#include <iostream>

using namespace std;

int main()
{
    /* int a , b , c , d , e , f;
     cin>>  a >> b >> c >> d >> e >> f;

     */

    int a, cont =  0;
    for(int i = 0; i < 5; i++)
    {
        cin>> a;
        if(a > 0)
        {
            cont++;
        }
    }
    cout<< cont << "valores positivos"<<endl;

    return 0;
}
