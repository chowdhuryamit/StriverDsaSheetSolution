#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=0;
        int j=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){

            }
            else{
                cnt++;
                nums[j]=nums[i+1];
                j++;
            }
        }
        return cnt+1;
    }
};