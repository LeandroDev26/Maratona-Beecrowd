#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector <int> n;
    int v ;
    cin>> v;

    for(int i = 0 ; i < 3; i++)
    {
            n.push_back(v);
            v += v;

    }

    for(int k = 0; k < n.size(); k++){
         cout << n[i]<<endl;
    }





    return 0;
}
