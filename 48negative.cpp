#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[7]={-1,-6,0,1,2,7,-4};
    int low=0;

    // int n=sizeof(arr)/sizeof(int);
    int end=6;
    while(low<end){
        if(arr[low]<0){
            low++;
        }
        else if(arr[end]>0){
            end--;
        }
        else{
             swap(arr[low],arr[end]);
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}