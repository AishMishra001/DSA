#include<bits/stdc++.h>
using namespace std ;
int main(){
  
  // set --> unique and sorted 

  set<int> st  ; 

  st.insert(2) ; // not push 
  st.insert(3) ; 
  st.insert(1) ; 
  st.insert(8) ; 
auto i = st.find(9);
  cout<< *i ; 
 
 cout<<endl ; 

 // multiset 

 // sorted not unique 

 multiset<int> mst2 ; 

 mst2.insert(2) ; 
 mst2.insert(8) ; 
 mst2.insert(4) ; 
 mst2.insert(8) ; 
 mst2.insert(8) ;  
 mst2.insert(8) ;  
 mst2.insert(8) ;  
 mst2.erase(mst2.find(8),mst2.find(8) + 4);// error due to + 


cout<<endl ; 
// mst2.erase(mst2.begin()+5); cant use begin in this agar hai guda to krke dekhle
// unorder set - unique and unsorted 

unordered_set<int> st4 ; 

  return 0 ; 
}
