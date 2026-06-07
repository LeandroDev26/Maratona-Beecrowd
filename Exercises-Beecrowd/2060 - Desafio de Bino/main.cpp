#include <iostream>

using namespace std;

int main()
{


    int n, t, mult2 = 0, mult3 = 0, mult4 = 0, mult5 = 0;
    cin>> n;

    for(int i = 0 ; i < n ; i++)
    {
        cin>> t;

        if(t % 2 == 0){
            mult2++;
        }else  if(t % 3 == 0){
            mult3++;
        }else  if(t % 4 == 0){
            mult4++;
        }

    }




    return 0;
}
