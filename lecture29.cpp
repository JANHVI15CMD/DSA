#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<2*n-2-row;col++){
            cout<<"*";
        }
       
    
        for(int col=0;col<row+1;col++){
         cout<<row+1;
         if(col!=row){
            cout<<"*";
         }
        }
        for(int col=0;col<2*n-2-row;col++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}