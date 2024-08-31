#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[3][3];
    
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            cin>>arr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     for(int i=0;i<3;i++){
        int sum =0;
        for(int j=0;j<3;j++){
    
        
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";

        cout<<endl;
     }
    return 0;
}