#include<bits/stdc++.h>

using namespace std;

// int main(){
   
//     vector<int>arr={1,3,5,3,4};
//     int ans=-1;
//     for(int i=0;i<arr.size();i++){
//         int index=abs(arr[i]);
        
//          if(arr[index-1]<0){
//             ans=index;
//         }
//         else{
//          arr[index-1] *=-1;
//         }
//     }
//        for(int i=0;i<arr.size();i++){
//         if(arr[i]>0){
//             cout<<i+1;
//             break;
//         }
//        }

    

// }

 void missing (int *arr ,int n){
//     for(int i=0;i<n;i++){
//         int index=abs(arr[i]);
//         if(arr[index -1]>0){
//             arr[index -1] *=-1;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]>0){
//             cout<<endl;
//             cout<<i+1<<" ";
//         }
//     }
// }
   int i=0;
   
   while(i<n){
    int index =arr[i]-1;
    if(arr[i]!=arr[index]){
        swap(arr[i],arr[index]);
    }
    else {
        ++i;
    }
   }
   for(int i=0;i<n;i++){
    cout<<arr[i];
   }
   cout<<endl;
   for(int i=0;i<n;i++){
    if(arr[i]!=i+1){
        cout<<i+1<<" ";
    }
   }
   cout<<endl;
 }
int main(){
    int arr[]={1,3,4,3};
    int  n= sizeof(arr)/sizeof(int);
    missing(arr,n);
    return 0;
}