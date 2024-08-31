#include<bits/stdc++.h>

using namespace std;

int main() {

  vector<int>nums={13,55,83,77};
       vector<int>answer;
        for(int i=0; i<nums.size(); i++){
          int it=nums[i];
        int rev=0;
       while(it>0){
         int  dig=it%10;
          rev=rev*10+dig;
          it=it/10;
        
       }
        nums[i]=rev;
      }
      for(int i=0; i<nums.size(); i++){
        int num=nums[i];
        while(num>0){
            int dig=num%10;
            answer.push_back(dig);
            num=num/10;

        }
      }
    for(auto it:answer){
        cout<<it<<endl;
    }
        
        
    
  return 0;
}