#include<bits/stdc++.h>

using namespace std;

int main() {
    int n=543;
    while(n!=0){
        int rem =n%10;
        cout<<rem<<" ";
        n=n/10;
    }
    cout<<endl;

    return 0;
}