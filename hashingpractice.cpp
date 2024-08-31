#include<bits/stdc++.h>

using namespace std;

int main() {
   vector<int>arr={10,20,30,30,30,40,50,60,70,80,90};

    map<int ,int>hash;
    for(int i=0;i<arr.size();i++){
        hash[arr[i]]++;
      
}
  for(auto i:hash){
    cout<<i.first<<" : "<<i.second<<endl;

  }

}
    