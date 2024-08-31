#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        int col;
        for( col=0;col<row+1;col++){
            cout<<col+1;
            
        }
        col=col-1;
        for(; col>=1; col=col-1){
            cout << col;
        }
        // for(int col=row; col>=1; col=col-1)
        
        cout<<endl;
    }
    return 0;
}