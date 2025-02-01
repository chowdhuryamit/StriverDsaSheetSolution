#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int,int>m;
       int sum=0,maxi=0;
       for(int i=0;i<arr.size();i++){
           sum+=arr[i];
           if(sum==k){
               maxi=max(maxi,i+1);
           }
           if(m.find(sum-k)!=m.end()){
               maxi=max(maxi,i-m[sum-i]);
           }
           if(m.find(sum)==m.end()){
               m[sum]=i;
           }
       }
       return maxi;
    }
};