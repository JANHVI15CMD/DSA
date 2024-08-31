#include<bits/stdc++.h>

using namespace std;

bool evenodd(int num){
    if(num%2==0 /*(n&1==0)*/){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int num;
    cin>>num; 
    bool numberis=evenodd(num);
    cout<<numberis;
    if(numberis==true){
        cout<<"the number is even";
    }
    else{
        cout<<"odd";
    }
    
}