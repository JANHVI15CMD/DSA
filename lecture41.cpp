#include<bits/stdc++.h>

using namespace std;
int setbit(int k){
    int mask=1<<k;
    int ans=mask| k;
    
    return ans;
}
int main() {
    int k;
    cin>>k;
  int  final= setbit(k); 
  cout<<final;

}