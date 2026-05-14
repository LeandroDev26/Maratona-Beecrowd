#include <iostream>

using namespace std;

int main()
{

    int n;

    while(cin>> n)
    {

        for(int i = 0 ; i < n; i++)
        {
            for(int j = 0 ; j < n; j++)
            {
                  if ( i == n/2 && j == n/2){
                    cout<<"4";
                  }
            }
        }

        cout<< "              "<<endl;

    }






    return 0;
}
