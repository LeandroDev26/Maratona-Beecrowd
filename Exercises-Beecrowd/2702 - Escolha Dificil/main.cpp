#include <iostream>
#include<cmath>
using namespace std;

int main()
{


    int c, b, p, cr, br, pr;
    cin>> c >> b >> p;
    cin>> cr >> br >> pr;
    int passa = abs((c-cr)+(b-br)+(p-pr));

    cout<<passa<<endl;


return 0;
}
