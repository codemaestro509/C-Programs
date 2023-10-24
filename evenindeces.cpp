#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Geeks";
    for(int i=0; i<s.length(); i=i+2){
        cout<<s[i];
    }
    return 0;
}