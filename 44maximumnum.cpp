#include<bits/stdc++.h>
// #include<limits.h>
using namespace std;

int main() {
    int arr[]={-5,8,-6,-2,9};
    int size=5;
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"maximum number"<<" "<<min;

    return 0;
}