#include<bits/stdc++.h>

using namespace std;
int unique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main() {
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int findelements=unique(arr);
    cout<<"this your unique element"<<findelements<<endl;
    return 0;
}