#include<iostream>
using namespace std ;
int main(){
  string s  ; 
  cin>> s  ; 

  // precompute 

  int hashh[26]={0}  ; 
   
  for(int i = 0 ; i<s.size() ; i++){
     hashh[s[i]-'a']++ ; 
  } 



  int p ; 
  cin>> p ; 
  while(p--){
    char ch ; 
    cin>>ch ; 
    cout<<hashh[ch-'a']<<endl ; 
  }

  return 0 ; 
}


// s - aabacaadef 

// 5 
// a -> 5 ...etc 