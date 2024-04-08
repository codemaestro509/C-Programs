#include<iostream>
#include<vector>
using namespace std;


int main(){
    
    int arr[]={1,2,3,3,4,5};
    int sizea=5;
    int brr[]={3,2,5,9,4};
    int sizeb=5;
    
    vector<int>ans;
    
    for(int i=0; i<sizea; i++){
        int element=arr[i];
        for(int i=0; i<sizeb; i++){
            if(element==brr[i]){
                brr[i]==-1;
                ans.push_back(element);
            }
        }
   
    }
 for(int k=0; k<ans.size(); k++){
     cout<<ans[k]<<"  ";
 }
    
    return 0;
}