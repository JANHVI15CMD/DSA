#include<bits/stdc++.h>

using namespace std;

int main() {
    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    // int arr[3][3];
    // int row=3;
    // int col=3;
    // cout<<"enter the arrays element";
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
        
    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;
    vector<vector<int>>arr(3,vector<int>(3));
 
     for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cin>>arr[i][j];
        }
        
     }
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<"  ";
        }
      cout<<endl;  
     }

    
}