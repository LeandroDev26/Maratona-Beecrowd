#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    string placa;
    cin>> n ;
    for(int i = 0; i < n ; i++)
    {
        cin>> placa;
        bool ok = true;
        for(int j = 0 ; j < 3; j++)
        {
            if(placa[i] >= 'A' && placa[j] <= 'Z')
            {
                if(placa[3] == '-')
                {

                }
                else
                {
                    ok = false;
                    cout<<"FAILURE"<<endl;
                    break;
                }
            }
            else
            {
                ok = false;
                cout<<"FAILURE"<<endl;
                break;

            }
        }
    }




    return 0;
}
