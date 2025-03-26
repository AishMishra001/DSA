// Q.1 : Print name 5 times 

// #include<iostream>

// using namespace std ;

// void strprint(string name , int count){  
//   if(count==5){
//     return ; 
//   }
//   cout<<name<<endl ;
//   count++ ;  
//   strprint(name , count) ; 
// }

// int main(){
//   int count = 0 ; 
  
//   string name ; 
//   cin>>name ; 
//   strprint(name , count) ;  
  
//   return 0 ; 
// }


// Q.2 : Print linearly from 1 to N  : 

#include<iostream>
using namespace std ;

void namePrint(int i , int num){   // i = 2 , num = 4 ( 4 > 2 ) ..... i = ().... 
   int a = i ; 
  if(num<a){  // i = 0 , num = 3 ( 3 > 0 ) 
    return ;  
  }
    cout<<a<<" " ;   //  1 
   namePrint(a+1,num) ; //  ( 2 , 4 )
}
int main(){
  int n ; 
  cin>>n ;      

namePrint( 1 ,  n ) ; // ( 1 , 3 )

  return 0 ;

}

