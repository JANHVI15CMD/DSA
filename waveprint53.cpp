#include<bits/stdc++.h>

using namespace std;
 void waveprint(vector<vector<int>>v){
    int m = v.size();
//    for (int i=0; i<n; i++){
//         if(i%2==0){
//             for(int j=0; j<n; j++){
//                 cout<<v[j][i]<<" ";
//             }
//         }
//         else{
//             for(int j=n-1; j>=0; j--){
//                 cout<<v[j][i]<<" ";
//             }
//         }
//     }
   int n=v[0].size();
   for(int i=0;i<n;i++){
    if(i &  1==0){
        for(int j=0;j<m;j++){
          cout<<v[j][i]<<" ";
        }
    }
    else{
        for(int j=m-1;j>=0;j--){
            cout<<v[j][i]<<" ";
        }
    }
   }
    cout<<endl;
 }

int main() {
    vector<vector<int>>v {{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
    };
    waveprint(v);
    return 0;
}