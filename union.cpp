#include<iostream>
#include<vector>
using namespace std;


int main(){
    
    int arr[]={1,2,3,4,5};
    int sizea=5;
    int brr[]={6,7,8,9};
    int sizeb=4;
    
    vector<int>ans;
    
    for(int i=0; i<sizea; i++){
        ans.push_back(arr[i]);
    }
    for(int i=0; i<sizeb; i++){
        ans.push_back(brr[i]);
        
    }
    for(int j=0; j<ans.size(); j++){
        cout<<ans[j]<<"  ";
    }
    
    return 0;
}