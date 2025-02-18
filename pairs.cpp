#include<bits/stdc++.h>
using namespace std ;

void pairExplain(){
  pair<int,int> p= {1,3} ; 

  cout<<p.first<<" "<<p.second << endl ; 

  pair<int,pair<int , int >> b = {1,{1,3}} ; 
  cout<<b.second.second <<endl ; 

  pair<int , int> arr[]={{1,2},{2,4},{4,5},{6,7}} ; 
  cout<<arr[1].second<<endl ; 
}
int main(){
     pairExplain() ; 
  return 0 ; 
}
