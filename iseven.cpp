#include<bits/stdc++.h>
using namespace std;
bool even(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
    
}
int main(){
    int n;
    cin>>n;
    bool iseven=even(n);
    if(iseven){
        cout<<"even"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
    
    
    
    return 0;
}