#include<bits/stdc++.h>

using namespace std;
float area(float r){
    float total=3.14*r*r;
    return total;
}

int main() {
    float r;
    cin>>r;
    float circle=area(r);
    cout<<"area of circle is"<<circle;
    
}