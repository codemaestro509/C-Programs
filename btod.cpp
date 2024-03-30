#include<bits/stdc++.h>
using namespace std;
int binarytodecimal(int n){

    int binary=0;
    int i=0;
    while(n){
    int num=n%10;
    binary=binary + num*pow(2,i++);
    n=n/10;
}
return binary;

}

int main(){
    int n;
    cin>>n;
    int d=binarytodecimal(n);

    cout<<d<<endl;



return 0;

}