#include<bits/stdc++.h>

using namespace std;

int main() {
     int arr[]={0,0,0,1,1,1,0,1,0,1};
     int size=10;
     int numzero=0;
     int numone=0;
     for(int i=0;i<size;i++){
        if(arr[i]==0){
            numzero++;
        }
        if(arr[i]==1){
            numone++;
        }
     }
     cout<<"number of zero"<<numzero<<endl;
     cout<<"number of one"<<numone;
    return 0;
}