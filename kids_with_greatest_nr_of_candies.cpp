#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int n = candies.size();
        vector<bool>ans;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int x: candies){
            pq.push(x);
        }

        for(int x : candies){
            int tmp = x+extraCandies;
            if(tmp>=qp.top()){
                ans.push_back(true);
                pq.push(tmp);
            }
            else{
                ans.push_back(false);
            }
        }
    }
};
int main(){

cout<<"flajf"<<endl;


return 0;
}