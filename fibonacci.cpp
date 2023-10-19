#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    int b=2;
    int c=0;
    for(int i=0; i<=n; i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}