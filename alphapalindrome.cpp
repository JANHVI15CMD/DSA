#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        int col;
        for(int col=0;col<row+1;col++){
           int print=col+1;
           char ch = print + 'A'-1;
           cout<<ch;
        }
    
    
        for(int col=row;col>=1;col=col-1){
          int  print= col;
          char ch=print+'A'-1;
          cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}