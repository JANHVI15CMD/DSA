#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int c=1;
    for(int row=0;row<n;row++){
        
        for(int col=0;col<=row;col++){
            cout<<c<<" ";
            c++;

        }
        cout<<endl;
    }
    return 0;
}