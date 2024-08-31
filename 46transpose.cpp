#include<bits/stdc++.h>

using namespace std;
int transpose(int arr[][3],int col,int row,int transposearr[3][3]){
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transposearr[i][j]=arr[j][i];
        }
    }
}
void printarray(int arr[][3],int col,int row){
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
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
    int transposearr[3][3];
    printarray(arr,row,col);
    transpose(arr,row,col,transposearr);
    cout<<"after transpose"<<endl;
    printarray(transposearr,row,col);

    return 0;
}