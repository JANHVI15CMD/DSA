#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int>arr{10,20,30,40,50,60};
    int sum=120;
    for(int i=0;i<arr.size();i++){
         int elements=arr[i];
         for(int j=i+1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                if(elements+arr[j]+arr[k]==sum)
                cout<<elements<<","<<" "<<arr[j]<< " ,"<<arr[k]<<endl;
            }
         }
    }
    return 0;
}