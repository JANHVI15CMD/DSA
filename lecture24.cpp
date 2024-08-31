#include<bits/stdc++.h>
#include<cmath>

using namespace std;
//decimal to binary number..........
//    int binarynum(int n){
//      int bit=0;
//      int binary=0;
//      int i=0;
//       while(n>0){
//      bit=n%2;
//      binary=bit*pow(10,i++)+binary;
     
//      n=n/2;
     

    
//       }
//       return binary;
//    }

//     int main() {
//     int n;
//     cin>> n;
//    int binary= binarynum(n);
//    cout<<binary;
    
//     }
//second method of decimal to binary number...
// int binarynum(int n){
//     int binary=0;
//     int i=0;
//     while(n>0){
//       int  bit=(n & 1);
    
//         cout<<bit<<endl;
        
//         // binary=bit*pow(10,i++)+binary;
//          n=n>>1;
       
//     }

    
// return binary;
// }
// int main(){
//     int n;
//     cin>>n;
//     binarynum(n);
// //   int binarydigit =binarynum(n);
// //    cout<<binarydigit;

// }
// binary to decimal.....
int binarydec(int n){
    int decimal=0;
    int i=0;
    while(n){
        int bit=n%10;
        decimal=decimal+bit*pow(2,i++);
        n=n/10;
        
    }
    return decimal;
}
int main(){
    int n;
    cin>>n;
    
   cout<< binarydec(n)<<endl;
    
}