#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    for(long long x=2; x<=n; x++){
        if(n%x==0){
            cout<<x<<" ";
          break;
        }
    }
    return 0;
}