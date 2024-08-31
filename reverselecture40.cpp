#include<bits/stdc++.h>

using namespace std;
bool reversenum(int x){

    int reverse;
    int temp=0;
    bool isneg=false;
    if(x<=INT_MIN){

        return 0;
    }
    if(x<0){
        isneg=true;
        x=-x;
    }
    while(x>0){
        if(x>INT_MAX/10){
          return 0;
        }
        else{
        reverse=x%10;
        temp=temp*10+reverse;
    
        x=x/10;}
        
    }
     cout<<temp;
     return isneg?-temp:temp;

}

int main() {
    int x;
    cin>>x;
    
   reversenum( x);
   
}