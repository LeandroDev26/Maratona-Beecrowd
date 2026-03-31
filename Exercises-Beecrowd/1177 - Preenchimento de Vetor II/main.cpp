#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t , cont = 0;
    vector <int> n;

    cin>> t;

    while(cont < 100)
    {
        for(int k = 0; k <= t -1; k++)
        {
            n.push_back(k);
        }
    }
    for(int j = 0 ; j < n.size(); j++)
    {
        cout<<"N[" << j << "]" <<" = "<< n[j] <<endl;
    }





    return 0;
}
