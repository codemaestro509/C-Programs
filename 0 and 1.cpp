#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int numzero=0;
    int numone=0;
    
vector<int>arr(n);
for(int i=0; i<arr.size(); i++){
    cin>>arr[i];
    
}
for(int i=0; i<arr.size();i++){
    if(arr[i]==0){
        numzero++;
    }
    if(arr[i]==1){
        numone++;
    }
}
cout<<numzero<<endl;
cout<<numone<<endl;
    
    return 0;
    }