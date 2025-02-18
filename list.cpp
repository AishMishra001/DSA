#include<bits/stdc++.h>
using namespace std ;
int main(){
  
  list<int> ls ; 

  ls.push_back(2) ;  // 2 
  ls.emplace_front(3) ;  // 3 , 2 
  ls.emplace_back(2) ;   // 3 , 2 , 2 


  for(auto  i : ls){
      cout<< i << " " ; 
  }


  return 0 ; 
}
