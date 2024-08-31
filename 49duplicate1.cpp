#include<bits/stdc++.h>

using namespace std;
// bool duplicate(vector<int>&arr){
    
//     for(int i=0;i<arr.size()-1;i++){
//         if(arr[i]==arr[i+1]){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
    
// }

// int main() {
//     vector<int>arr{2,2,3,4};

//     if(duplicate(arr)==true){
//         cout<<"found";
//     }
//     else{
//         cout<<"not found";
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
bool duplicate(vector<int>& arr) {
    // Sort the array first
    sort(arr.begin(), arr.end());
    
    // Check adjacent elements for duplicates
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            return arr[i];
            break;
             // Duplicate found
        }
        
    }
    
    return false; // No duplicates found
}

int main() {
    vector<int> arr{1, 2, 3, 4};

    if (duplicate(arr) == true) {
        cout << "found";
    } else {
        cout << "not found";
    }
    return 0;
 }