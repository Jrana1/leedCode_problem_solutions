//https://leetcode.com/problems/string-compression/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        
          int n=chars.size();
          string ans="";
          int cnt=0;
          char curr=chars[0];
          for(int i=1;i<n;i++){
             
              if(chars[i]==chars[i-1]){
                 cnt++;
                 curr=chars[i];
                 
              }
              else{
                
                 if(cnt==0){
                    ans+=curr;
                    curr=chars[i];
                    cnt=0;
                 }
                 else{
                        
                        string num = to_string(cnt+1);
                        ans+=curr;
                        curr=chars[i];
                        cnt=0;
                        for(int k=0;k<num.size();k++){
                             ans+=num.at(k);
                        }

                 }
                 
              }

          }
         cout<<cnt<<" "<<curr<<endl;
         cout<<ans<<endl;
          
          if(cnt==0){
                    ans+=curr;
                   
                   
                 }
                 else{
                        
                        string num = to_string(cnt+1);
                        ans+=curr;
                        // curr=chars[i];
                        // cnt=0;
                        for(int k=0;k<num.size();k++){
                             ans+=num.at(k);
                        }

                 }
                 
              

          cout<<ans<<endl;
          return 3;

    }
};

int main(){

   Solution s=Solution();
   vector<char>chars={'a','b','b','b','b','b','b','b','b','b','b','b'};
  
   s.compress(chars);

     

    return 0;
}