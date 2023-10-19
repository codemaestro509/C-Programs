#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            //if we cout n then numer 5 will be the output in the form of pyramid
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}