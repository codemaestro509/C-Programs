#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
            
        }
      
    }
    return true;
}

int main(){
    
    int n;
    cin>>n;
    
    bool prime=is_prime(n);
    
    if(prime){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
  
    
    
    
    return 0;
}