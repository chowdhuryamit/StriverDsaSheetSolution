#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cnt++;
            }
        }
        int pos=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[pos]=nums[i];
                pos++;
            }
        }
        for(int i=pos;i<nums.size();i++){
            nums[i]=0;
        }
    }
};