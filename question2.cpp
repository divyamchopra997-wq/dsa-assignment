#include<iostream>
#include<vector>
using namespace std;
// remove duplicates in array
int main(){ 
    // removed duplicates elements in arr
    vector<int>arr={1,2,2,3,3,4,4,5};
    vector<int>temp;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
        temp.push_back(arr[i]);}
    }
for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<" ";
}
}