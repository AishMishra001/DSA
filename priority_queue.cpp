#include<bits/stdc++.h>
using namespace std ;
int main(){
  

  // called max heap as well 
  // store in decreasing order ----> meaning that the top of the queue will be the max element 
  priority_queue<int> pq ; 

  pq.push(2) ; 
  pq.push(3) ; 
  pq.push(4) ;

  pq.pop() ; 

  cout<<pq.top() ; 

  // minimum heap 

  priority_queue<int , vector<int> , greater<int>> pq2 ; 
  pq2.push(2) ; 
  pq2.push(4) ; 
  pq2.push(9) ;
  pq2.emplace(4) ; 

// 2 , 4 , 4, 9 

 cout<<pq2.top() ; 
  return 0 ; 
}
