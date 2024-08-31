#include<bits/stdc++.h>

using namespace std;
//  firstmethod

// int main() {
//     vector<int>arr{1,0,0,2,2,1,1,0};
   
//    int zero=0;
//    int one=0;
//    int two=0;
//    for(int i=0;i<arr.size();i++){
//     if(arr[i]==0){
    
//     zero++;}
   
//    if(arr[i]==1){
   
//    one++;}
//    if(arr[i]==2){
    
//     two++;
//    }
//    }
//    int i=0;
//    while(zero--){
//     arr[i]=0;
//     i++;

//    }
//    while(one--){
//     arr[i]=1;
//     i++;
//    }
//    while(two--){
//     arr[i]=2;
//     i++;
//    }
//    for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
//    }
//     cout<<endl;
    

//     return 0;
// }

// second method

// int  main(){
//      vector<int>arr{1,0,0,2,2,1,1,0};
//      int low=0;
//      int mid=0;
//      int high=arr.size()-1;
//     while(mid<=high){
//         if(arr[mid]==0){
//             swap(arr[low],arr[mid]);
//             low++;
//             mid++;
//         }

//         else if(arr[mid]==1){
           
//             mid++;
//         }
//         else{
//            swap(arr[mid],arr[high]);
           
           
//            high--;
            
//         }
//      }
//      for(auto val:arr){
//         cout<<val<<" ";
//      }

// }

// third 


// int swaping(vector<int> arr,int mid,int low,int high){
   
    
     
//        while(mid<=high){
//          if(arr[mid]==0){
//              swap(arr[low],arr[mid]);
//              low++;
//            mid++;
//       }

//       else if(arr[mid]==1){
           
//            mid++;
//       }
//       else{
//         swap(arr[mid],arr[high]);
           
           
//          high--;
            
//        }
//     }
    
// }
  
//  int  main(){
//      vector<int>arr{1,0,0,2,2,1,1,0};
//     int   mid=0;
//     int  low=0;
//       int high= arr.size()-1;

//      swaping(arr,low,mid,high);

//      for(auto val: arr){
//         cout<<arr[val];
//      }
    
     
    
//  }
void swaping(vector<int>& arr, int mid, int low, int high) {
    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    vector<int> arr{1, 0, 0, 2, 2, 1, 1, 0};
    int mid = 0;
    int low = 0;
    int high = arr.size() - 1;

    swaping(arr, mid, low, high);

    for(auto val: arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}