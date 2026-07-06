#include <iostream>

using namespace std;

int main()
{

    int c, x, y;
    cin>> c ;
    for(int i = 0 ; i < c ; i++)
    {
        cin>> x >> y;
        int opc = (x + y);
        switch(opc)
        {

        case 0:
            cout<< "PROXYCITY"<<endl;
            break;

        case 1:
            cout<< "P.Y.N.G."<<endl;

            break;
        case 2:
            cout<< "DNSUEY!"<<endl;

            break;
        case 3:
            cout<< "SERVERS"<<endl;

            break;
        case 4:
            cout<<"HOST!"<<endl;
            break;

        case 5:
            cout<<"HOST!"<<endl;
            break;
        case 6:
            cout<<"HOST!"<<endl;
            break;
        case 7:
            cout<<"HOST!"<<endl;
            break;

        case 8:
            cout<<"HOST!"<<endl;
            break;
        case 9:
            cout<<"HOST!"<<endl;
            break;
        case 10:
            cout<<"HOST!"<<endl;
            break;




        }
    }



    return 0;
}
