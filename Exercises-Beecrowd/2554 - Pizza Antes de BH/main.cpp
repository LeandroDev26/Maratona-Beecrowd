#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n, d, pessoa;
    string data;
    bool todo_mundo_pode = true;
    while(cin>> n >> d)
    {
        for(int i = 0; i < d ; i++)
        {
            cin>> data;

            for(int j = 0; j < n ; j++)
            {
                cin>> pessoa;
                if(pessoa == 0)
                {
                    todo_mundo_pode = false;
                }
            }
        }

    }








    return 0;
}
