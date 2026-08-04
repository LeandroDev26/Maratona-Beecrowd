#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "---------------------------------------" << endl;
    cout << "| decimal   |  octal  |  Hexadecimal  |" << endl;
    cout << "---------------------------------------" << endl;

    for (int i = 0; i < 16; i++) {
        cout << "|"
             << setw(7) << dec << i << "    |"
             << setw(5) << oct << i << "    |"
             << setw(8) << hex << uppercase << i << "       |"
             << endl;
    }

    cout << "---------------------------------------" << endl;

    return 0;
}
