#include<bits/stdc++.h>
using namespace std ;
int main(){
  map<pair<int,int>,int> mpp;//map sort elements based on sorted order 

  map<int,char> mpp2 ; 
   mpp2[1] = 'a' ; 
   mpp2[4] = 'b' ; 
   mpp2.insert({20, 'a'}) ;
   mpp2.insert({21, 'b'}) ;

  mpp[{1,2}]=1;
  mpp[{2,2}]=2;
  mpp[{3,2}]=3;
  mpp[{1,4}]=4;
  mpp[{1,4}]=5;

  for(auto it:mpp){
    cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
  }
  cout<<mpp[{1,7}]<<endl;

   // unordered_map  --> same as map but unsorted and also reduce the time complexity from log(n) to 1   
   
    
  return 0 ; 
}
