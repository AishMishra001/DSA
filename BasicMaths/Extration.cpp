#include<iostream>
using namespace std ;
int main(){
  int num,unit_digit;
  cout<<"Enter value"<<endl;
  cin>>num;
  while(num>0){
    unit_digit=num%10;  
    cout<<unit_digit<<endl;
    num=num/10;
    cout<<num<<endl;
  }
  return 0 ; 
}
