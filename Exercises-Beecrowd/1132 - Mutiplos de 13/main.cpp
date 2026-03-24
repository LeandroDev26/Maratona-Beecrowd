#include <iostream>

using namespace std;

int main()
{

  int x = 0 , y = 0 , soma = 0;
  cin>> x >> y;

  for( int i = x ; i <= y; i++){
      if(i % 2 !=0 ){
         soma+= i;
      }
  }

  cout<<soma<<endl;





    return 0;
}
