#include<bits/stdc++.h>

using namespace std;

int main() {
    int digit[]={7,5,9,4};
    int ans=0;

    for(int i=0;i<4;i++){
        ans=ans*10+digit[i];
    }
    cout<<ans<<endl;
    return 0;
}