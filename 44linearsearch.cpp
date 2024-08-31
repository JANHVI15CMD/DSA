#include<bits/stdc++.h>

using namespace std;
// bool findkey(int arr[],int size,int key){
    
//    for(int i=0;i<size;++i){
//     if (arr[i]==key){
//         return true;
//     }}
//     return false;
   
// }
// int main() {
//     int arr[4]={2,5,7,9};
//     int size=4;
//     cout<<"enter the key to find";
//     int key;
//     cin>>key;
//     if(findkey(arr,size,key)){
//         cout<<"found"<<endl;
//     } 
//     else{
//         cout<<"not found";
//     }
//     return 0;
// }

// 2nd method
// int main (){
//     int arr[]={5,7,3,8};
//     int key;
//     cin>>key;
//     int size=4;
//     bool flag =0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             flag=1;
//         }
//     }
//     if(flag=true){
//         cout<<"prsent";
//     }
//     else{
//         cout<<"not present";
//     }
// }


// 3rd method
 bool find(int arr[],int size,int key){
    for(int i=0;i<size;i++){
    if(arr[i]==key){
        return true;
    }
 }
    return false;
 }
 int main(){
    int arr[]={3,4,7,5,8,9};
    int size=6;
    int key;
    cin>> key;
    bool ans=find(arr,size,key);
    if (ans==true){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }

 }