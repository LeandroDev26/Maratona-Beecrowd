#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char l ;
    vector<char> alfabeto;
    cin>> l;
    for(char i = 'a' ; i <= 'z'; i++)
    {
        cout<< i << " " <<endl;
        alfabeto.push_back(i);

    }

    for(int j = 0 ; j < alfabeto.size(); j++)
    {

        if(alfabeto[j] == l)
        {
            cout<< j + 1 <<endl;
        }
    }






    return 0;
}
