#include<bits/stdc++.h>

using namespace std;
int repeat(int arr[],int n){
//    for(int i=0; i<n;i++){
//     bool isRepeated=false;
//     for(int j=i+1;j<n;j++){
//         if(arr[i]==arr[j]){
//             isRepeated=true;
//             return i+1;
//         }
//     }
//    }
//    return -1;
// }
//   unordered_map<int,int>elementmap; 
//   for(int i=0;i<n;i++){
//     if(elementmap.find(arr[i])!=elementmap.end()){
//         return i+1;
//     }else{
//         elementmap[arr[i]]=i;
//     }
//   }
//   return-1;
// }

// int main() {
//     int arr[]={1,5,3,4,3,5,6};
//     int n=sizeof(arr)/sizeof(int);
//     int result= repeat(arr,n);
//      cout<<"first repeating element is at position:"<<result<<endl;
    
// }
 unordered_map<int, int> elementMap;
    for (int i = 0; i < n; i++) {
        elementMap[arr[i]]++;}
         for (int i = 0; i < n; i++){
        if (elementMap[arr[i]>1]) {
            return i + 1; // return 1-based index
        } 
         
    }
    return -1; // return -1 if no repeating element is found
}

int main() {
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    int result = repeat(arr, n); // call the function and store the result
    
    // Print the result
    cout << "First repeating element is at position: " << result << endl;
    
    return 0;}