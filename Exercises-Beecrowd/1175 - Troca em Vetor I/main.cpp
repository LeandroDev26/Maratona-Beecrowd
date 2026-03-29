#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector <int> n;
    int v;

    for(int i = 0; i < 20 ; i++)
    {

        cin>> v ;
        n.push_back(v);
    }
  //  for(int k = 0 ; k < n.size(); k++)
 //   {
     int k = 0;
        for(int j = n.size(); j >= 0; j--)
        {
            cout<< "N[" << k << "]" << " = " << n[j] <<endl;
             k++;
        }
   // }






    return 0;
}
