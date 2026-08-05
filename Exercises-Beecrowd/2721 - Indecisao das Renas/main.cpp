#include <iostream>

using namespace std;

int main()
{

    int n;
    int pilhaNeve = 0;
    for(int i = 0; i < 9; i++)
    {
        cin>> n;
        pilhaNeve += n;
    }

    while(pilhaNeve > 9)
    {
        if( (pilhaNeve % 9) < 9)
        {
            break;
        }
        else
        {
            pilhaNeve /= 9;
        }
    }

    switch(pilhaNeve)
    {

    case 1:

    break;







    }









    return 0;
}
