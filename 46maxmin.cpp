#include<bits/stdc++.h>
#include<limits.h>

using namespace std;
int print(int arr[][3],int row,int col){
    int max=INT_MIN;
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(arr[i][j]>max){
            max=arr[i][j];
        }
    }
   }
   cout<<max;

}

int main() {
    int arr[3][3];
    int row=3;
    int col=3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    print(arr,row,col);

    return 0;
}