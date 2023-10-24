#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int c;
    
  for(int i=1; i<=10; i++){
      int a=n1*i;
      int b=n2*i;
     c=a-b;
    cout<<c<<endl;
      
  }
  
    return 0;
}