#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{

    char t ;
    double soma = 0;
    int linhas = 12;
    int colunas = 12;
    vector< vector <double>> matriz (linhas , vector<double> (colunas , 0));


     cin>> t ;

     for(int i = 0 ; i < linhas; i++){

          for(int j = 0 ; i < colunas ; j++){
              cin>> matriz[i][j];
          }
     }


     for(int l = 0 ; l < linhas - 1; l++){

        for(int k = 0 ; k < linhas - 2; k++){

            soma += matriz[l][k];
        }

     }

      if( t == 'S')
    {
        cout<< soma <<endl;
    }
    else if( t == 'M')
    {

        cout << soma / 30.0 << endl;
    }



    return 0;
}
