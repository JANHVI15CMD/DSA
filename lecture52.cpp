#include<bits/stdc++.h>

using namespace std;
vector <int> common (int a[],int b[],int c[],int n1,int n2,int n3){
//     set<int>st;
//     vector<int>ans;
//     int i,j,k;
//     i =j=k=0;
//     while(i<n1 && j<n2  && k<n3){
//         if(a[i]==b[j] && b[j]==c[k]){
//             st.insert(a[i]);

//             i++;
//             j++;
//             k++;
//         }
//         else if(a[i]<b[j]){
//             i++;}
//         else if(b[j]<c[k]){
//             j++;}
//         else{
//             k++;
//         }
//     }
//     for( auto i:st){
//         ans.push_back(i);
//     }
//     return ans;

// }

    vector<int>ans;
    int i,j,k;
    i =j=k=0;
    while(i<n1 && j<n2  && k<n3){
        if(a[i]==b[j] && b[j]==c[k]){
             if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }

            i++;
            j++;
            k++;
        }
        else if(a[i]<b[j]){
            i++;}
        else if(b[j]<c[k]){
            j++;}
        else{
            k++;
        }
    }
    
    return ans;

}
int main() {
    int a[] = {3,3,3,3};
    int b[] = {3,3,3,3};
    int c[] = {3,3,3,3,3};
    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    int n3 = sizeof(c)/sizeof(c[0]);
    vector<int> result= common(a, b, c, n1, n2, n3);
    for(auto val: result){
        cout<<val<<" ";  
    }
    cout<<endl;
    return 0;

    

}
