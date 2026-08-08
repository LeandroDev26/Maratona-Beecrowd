#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, d ;
    string lixo;
    while(cin>> a >> lixo >> b >> c >> lixo >> d)
    {

        cout<< fixed << setprecision(6) << "A = "<< a << ","<< " B = "<< b <<endl;
        cout<<"C = "<< c << ","<< " D = "<< d <<endl;
    }




    return 0;
}
