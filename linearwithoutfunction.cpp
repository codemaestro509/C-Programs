#include<bits/stdc++.h>
using namespace std;
int main(){
    
int arr[]={1, 2 , 3};
int size=3;
int key;
cin>>key;
int flag=0;
for(int i=0; i<size; i++){
    if(arr[i]==key){
        flag=1;
        break;
        
    }
}
if(flag==1){
    cout<<"Yess"<<endl;
}
else{
    cout<<"No"<<endl;
}
    
    
    return 0;
    }