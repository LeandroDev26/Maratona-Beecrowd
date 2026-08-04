#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double primeira = 234.345;
    double segunda = 45.698;
    cout<< fixed << setprecision(6);
    cout<< primeira <<" - " <<segunda <<endl;
    cout<< fixed << setprecision(0);
    cout<< primeira <<" - " <<segunda <<endl;
    cout<< fixed << setprecision(1);
    cout<< primeira <<" - " <<segunda <<endl;
    cout<< fixed << setprecision(2);
    cout<< primeira <<" - " <<segunda <<endl;
    cout<< fixed << setprecision(3);
    cout<< primeira <<" - " <<segunda <<endl;
    cout<< fixed << setprecision(6);
    cout<< primeira <<" - " <<segunda ;
    cout<<"e+01"<<endl;





    return 0;
}
