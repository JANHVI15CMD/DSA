#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cout<<"enter the string";
    cin>>str;
    int hash[26]={0};
    for(int i=0;i<str.size();i++){
        hash[str[i]-'a'] +=1;
    }
    int q;
    cout<<"enter q";
    cin>>q;
    while(q--){
    cout<<"enter ch";
    char ch;
    cin>>ch;
        cout<<hash[ch-'a']<<endl;
    }
    return 0;
}