#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    char op;
    cin>>op;
    switch(op){
    case '1':
    cout<<a+b;
    break;
    case '2':
    cout<<b-a;
    break;
    case '3':
    cout<<a*b;
    break;
    default:
    cout<<"asdfg";
    }
    return 0;
}