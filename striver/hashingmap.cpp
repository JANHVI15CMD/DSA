#include<bits/stdc++.h>

using namespace std;

int main() {
      int n;
      cout<< "enter the n";
      cin >>  n;
      int arr[n];
      for(int i=0;i<n;i++){
        cout<<"enter the elements";
        cin>> arr[i];
      }
      map<int,int>mpp;
      for(int i=0;i<n;i++){
        mpp[arr[i]]++;
      }
      for(auto it:mpp){
        cout<<it.first<<" -> "<<it.second<<endl;  // prints the elements and their counts in the map.  // example: 1 2, 2 1, 3 1, 4 1, 5 1, 6 1, 7 1, 8 1, 9 1, 10 1, 11 1, 12 1, 13 1, 14 1, 15 1, 16 1, 17 1, 18 1, 19 1, 20 1, 21 1, 22 1, 23 1, 24 1, 25 1, 26 1, 27 1, 28 1, 29 1, 30 1,
      }
      int q;
      cout<<"enter the q";
      cin>>q;
      while(q--){
      int num;
      cout<<"enter the num";
      cin>>num;
      cout<<mpp[num]<<endl;
      }
    return 0;
}