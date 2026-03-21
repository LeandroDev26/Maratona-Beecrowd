#include <iostream>
using namespace std;

int main()
{


    double i = 0.0, j = 1.0;
    while( i <=2.0)
    {

       j = i + 1;

        for(int i = 0; i < 3; i++)
        {
          cout<<"I="<< i << " J=" << j <<endl;
          j++;
        }

        i += 0.2;
        i += 0.2;


    }




    return 0;
}
