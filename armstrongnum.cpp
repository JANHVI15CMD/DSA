#include<bits/stdc++.h>

using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int count=0;
//     if (n == 0) {
//         return 1;
//     }
//     if(n<0){
//        n=-n ;
//     }

//     while(n!=0){
//         int digit=n/10;
//         count++;
//         cout<<count<<endl;

//     }
//     return 0;


int countDigits(int n) {
    // Handle the case where n is zero
    if (n == 0) {
        return 1;
    }

    // Handle negative numbers
    if (n < 0) {
        n = -n; // Make the number positive
    }

    int count = 0;
    while (n != 0) {
        n /= 10; // Remove the last digit
        count++; // Increment the digit count
    }
    return count;
}

int main() {
    int n = -12345;

    int numDigits = countDigits(n);
    cout << "Number of digits in " << n << " is " << numDigits << endl;

    return 0;
}
