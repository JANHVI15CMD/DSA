#include <iostream>
using namespace std;
int main(){
         int row,col,i,colcount,rowcount;
        //  for(row=0;row<3; row=row+1){
        //     if(row==0 || row== 2){
        //         for(col=0;col<5;col = col+1){
        //             cout << "* ";
        //         }
        //     }
        //     else{
        //         cout<<"* ";
        //         for(i=0;i<3;i=i+1){
        //             cout << "  ";
                  
        //         }
        //         cout << "* ";
        //     }
        //     cout << endl;
        //  }
        // for(row=0;row<6;row=row+1){
        //     if(row==0 || row==5){
        //         for(col=0;col<5;col=col+1){
        //         cout << "* ";
        //         }
        //     }
         
        //   else {
        //     cout << "* ";
        //     for(i=0;i<6;i=i+1){
        //         cout<< " " ;
        //     }
        //     cout << "* ";
        //   }
        // cout<< endl;
        // }

        cin >>  colcount;
        cin >> rowcount;
        for(row=0;row<rowcount;row++){
           if(row==0 || row==rowcount-1){
                for(col=0;col<colcount;col++){
                  
                cout << "*";
                }}
            else{
                cout << "*";
                for(i=1;i<colcount-1;i=i+1){
                    cout << " ";
                }
                cout<<"*";
            }
            cout << endl;
           
       }
}