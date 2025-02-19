#include<bits/stdc++.h>
using namespace std ;

// Basic approach 

int GCD(int a , int b ){   //  12 , 24 
  int gcd = 0 ;      
    for(int i = 1 ; i<=min(a,b) ; i++){    // i = 1........12
        if(a%i==0 && b%i==0){     // 12%1 = 0  .........12%12 = 0 
          gcd = i ;    // gcd = 1 , 12
        }
    }
    return gcd ; 
}

int main(){
    int n1 , n2 ; 

    cin>>n1>>n2 ; 

    cout<<GCD(n1,n2)<<endl ;   // 12
    // 12 , 24 ---> 12 : 1 ,2,3 , 4, 6,12  || 24 ---> 1 ,2 , 3, 4 , 6 , 12 ,24 

  return 0 ; 
}
