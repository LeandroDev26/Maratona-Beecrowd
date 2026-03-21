#include <iostream>

using namespace std;

int main()
{


    double i = 0.0, j = 1.0, aux = 3.0;

    while(i <=2.0)
    {



        while(j <= aux)
        {
          cout<<"I="<< i << " J=" << j <<endl;
          j++;
        }

        i += 0.2;
        j += 0.2;

    }




    return 0;
}
