#include<bits/stdc++.h>

using namespace std;
bool prime(int n){
    int i=2;
    for(i-2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
            return true;
        

    
}

int main() {
    int n;
    cin>>n;
    int final=prime(n);
    if(final==true){
    cout<<"number is prime";
    }
    else{
        cout<<"number is not prime ";
    }
}