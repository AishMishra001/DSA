// 1
// 12
// 123
// 1234
// 12345

#include<iostream>
using namespace std ;
int main(){
  for(int i = 1 ; i<=5 ; i++){     // 1
    for( int j = 1 ; j<=i ; j++){    // 1 ( 1<=1 )
      cout<<i;      
    }
    cout<<endl; 
  }
  return 0 ; 
}
