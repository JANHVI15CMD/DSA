#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int>arr{10,20,30,40,50};
    int sum=0;
    cout<<"enter the sum";
    cin>>sum;
    for(int i=0;i<arr.size();i++){
       
        int element=arr[i];
    
    for(int j=i+1;j<arr.size();j++){
        if(element+arr[j]==sum){

        cout<<element<<" pair with "<<arr[j]<<" "<<endl;
    }
    }
    }
    return 0;
}