#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fraseDia, fraseMedico;

    if (cin >> fraseDia >> fraseMedico)
    {

        if (fraseDia.length() >= fraseMedico.length())
        {
            cout << "go\n";
        }
        else
        {
            cout << "no\n";
        }
    }

    return 0;
}
