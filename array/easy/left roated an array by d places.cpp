#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        deque<int>dq;
        for(int i=0;i<nums.size();i++){
            dq.push_back(nums[i]);
        }
        while(k--){
            int n=dq.back();
            dq.pop_back();
            dq.push_front(n);
        }
        int i=0;
        while(!dq.empty()){
          nums[i]=dq.front();
          dq.pop_front();
          i++;
        }
        
    }
};