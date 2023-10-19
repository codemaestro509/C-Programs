#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"entr value of n"<<endl;
    cin>>n;
    int x;
    cout<<"enter value of x"<<endl;
    cin>>x;
    
  
    for(int i=1;i<=n; i++){
        if(i%x==0)
        continue;
        cout<<i<<endl;
        
    }
    return 0;
}
