#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fac=1;
    for(int x=1; x<=n; x++){
        fac=fac*x;
    }
    cout<<fac;
    return 0;
}