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
            if(placa[j] >= 'A' && placa[j] <= 'Z')
            {
            }
            else
            {
                ok = false;
                cout<<"FAILURE"<<endl;
                break;

            }
        }
        if(placa[3] == '-')
        {
        }
        else
        {
            ok = false;
            cout<<"FAILURE"<<endl;
            break;
        }

        for(int k = 4; k < 8; k++)
        {
            if(placa[k] >= 0 && placa[k] <= 9)
            {
            }
            else
            {
                ok = false;
                cout<<"FAILURE"<<endl;
                break;
            }
        }

         if(placa[7] == '1' || placa[7] == '2'){
            cout<<"MONDAY"<<endl;
         }
    }




    return 0;
}
