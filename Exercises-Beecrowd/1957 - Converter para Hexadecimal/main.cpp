#include <iostream>
#include <string>

using namespace std;

int main()
{

    int v , quociente = 0 , resto = 0;
    string num;
                                                                /*10 = A
                                                                11 = B
                                                                12 = C
                                                                13 = D
                                                                14 = E
                                                                15 = F
                                                                 */
    cin>> v;


    while(1){

          quociente = v / 16;
          resto = v % 16;
          if( resto >= 10 && resto <= 15){

              if( resto == 10){
                num = "A" ;
              }else
              if( resto == 11){
                num = "B" ;
              }else
              if( resto == 12){
                num = "C" ;
              }else
              if( resto == 13){
                num = "D" ;
              }else
              if( resto == 14){
                num = "E" ;
              }else
              if( resto == 15){
                num = "F" ;
              }
          }



    }




    return 0;
}
