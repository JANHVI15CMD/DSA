#include<bits/stdc++.h>

using namespace std;

int main() {
    int n=100;
   int ans=0;
   while(n!=0){
    if(n&1){
        ans++;
    }
    n=n>>1;
   }
   cout<<ans;
    return 0;
}