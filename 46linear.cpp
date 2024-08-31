#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool find(int arr[][3],int row,int col){
    cout<<"enter the key for search";
    int key;
    cin>>key;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(key==arr[i][j]){
                return true;
            }
        }
    }
    return false;


}

int main() {
    int arr[3][3];
    int row=3;
    int col=3;

    
    for(int i=0;i<row;i++){

        for(int j=0;j<col;j++){
          cin>>arr[i][j];
            

        }
        
    }

    if(find(arr,col,row)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;
}