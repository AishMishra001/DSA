#include<bits/stdc++.h>
using namespace std ;
int main(){
  
  vector<int> v ; // defination 

  vector<int> v1 = {1,2,3,4,5} ;  // value dalna 

  cout<<v1[2]<<endl ; 

  v1.push_back(2) ; // new elements add karna 
  v1.push_back(3) ; 

  cout<<v1[6]<<endl ; 
  
  for(int i=0 ; i<v1.size() ; i++){
       cout<<v1[i]<<endl ; 
  }


vector<pair<int,int>> v2 = {{1,2},{2,3},{3,4},{4,5}} ; 

cout<<v2[0].first<<endl ; 

v2.emplace_back(1,2) ; 
v2.push_back({1,2}) ;  


  vector<int> v4 = {1,2,3,4,5,6,7,8,9,10} ;  // value dalna 

for(vector<int>::iterator it = v4.begin() ; it !=v4.end() ; it++){
  cout<<*(it)<<" "  ; 
}

cout<<endl  ; 

for(auto it = v4.begin() ; it !=v4.end() ; it++){       // here 'auto' works the same as vector<int>::iterator
  cout<<*(it)<<" "  ; 
}

cout<<endl ; 

for(auto it:v4){
  cout<<&it<<" " ; 
}

   vector<int> v5 = {1, 2, 3, 4, 5};

    for (auto it : v5) {
        cout << &it << " ";  // Prints different addresses (local copies)
    }
    cout << endl;




// Erase and Insert 


vector<int> v6 = {1,2,3,4,5,6,7,8,9} ; 

v6.erase(v6.begin()+1)  ; 

for(auto i:v6){
  cout<<i<<" " ; 
}

cout<<endl ; 

v6.erase(v6.begin()+3,v6.end()) ;


  cout<<v6.empty(); 


vector<int> v7(2,100)  ;   // { 100 , 100 }
v7.insert(v7.begin(), 300) ;  // { 300 , 100 , 100 }
v7.insert(v7.begin() + 1 , 2 , 200)  ;  // { 300 , 200 , 200 , 100 , 100  }


for(auto i : v7){
  cout<<i<<endl ; 
}

  v7.erase(v7.begin()) ; 


  v7.erase(v7.begin()+1 , v7.begin()+3) ; 

cout<<endl ; 

for(auto i : v7){
  cout<<i<<endl ; 
}


  return 0 ; 
}
