#include <iostream>
#include <string>
using namespace std;

int main()
{

    int a ;
    float b ;
    char c ;
    string d;

    while(cin>> a >> b >> c)
    {
        cin.ignore();
        getline(cin, d);

        cout<< a << b << c << d <<endl;
        cout << a << "\t" << b << "\t" << c << "\t" << d << endl;

    }





    return 0;
}
