#include<bits/stdc++.h>
using namespace std ;
int main(){

   int n ; 

    cin>>n ; 
    vector<string> arr(n) ; 
    cout<<"Enter the Strings :"<<endl ; 

    for(int i = 0; i<n ; i++){
      cin>>arr[i] ; 
    }
    
    cout<<"Capacity :"<<arr.capacity()<<" Size :"<<arr.size() ; 

    // for(auto i : arr){
    //   cin>>arr[i] ; 
    // }
   
   int numDelete ; 
   cout<< "Number of strings u wonna delete : "<<endl ; 
   cin>>numDelete ; 
    arr.erase(arr.begin() , arr.begin()+ numDelete) ; 


    cout<<"Capacity :"<<arr.capacity()<<" Size :"<<arr.size() ; 

   
    

  return 0 ; 
}
