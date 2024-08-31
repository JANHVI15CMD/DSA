#include<bits/stdc++.h>

using namespace std;
bool prime(int n){
    int i=2;
    for(i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    
    for(int i=2;i<n;i++){
        bool final=prime(i);
        if(final==true)
{
      cout<<i;
}        
    }
    
}