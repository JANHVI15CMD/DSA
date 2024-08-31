#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int k;
    int row;
    // for(int col=0;col<2*n+1;col++){
    //      cout<<"*";
         
     for(int row=0;row<n;row++){
           
        int col;
        
        
        
        for(col=0;col<row+1;col++){
            cout<<col+1;
        }
        
        col=col-1;
        for(; col>=1; col=col-1){
            cout<<col;
        }
        if(col==0||col==row+1){
            cout<<"*";
        }
        cout<<endl;

    }
     
    
    
    for(int row=0;row<n;row++){
        int col;
        for( col=0;col<n-row-1;col++){
            cout<<col+1;
        }
        col=col-1;
        for(;col>=1;col=col-1){
            cout<<col;
        }
        if(col==0||col==n-row){
            cout<<"*";
        }
        
        
        
        cout<<endl;
    }
    
    }
    
    
