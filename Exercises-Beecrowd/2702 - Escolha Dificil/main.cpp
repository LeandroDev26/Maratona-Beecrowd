#include <iostream>
#include<cmath>
using namespace std;

int main()
{


    int c, b, p, cr, br, pr, passa;
    cin>> c >> b >> p;
    cin>> cr >> br >> pr;
    if(pr > p)
    {
        passa += abs(p - pr);
    }
    else if(br > b)
    {
        passa += abs(b- br);
    }
    cout<<passa<<endl;


    return 0;
}
