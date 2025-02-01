#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
        }
        int secondMaxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>secondMaxi && arr[i]<maxi){
                secondMaxi=arr[i];
            }
        }
        if(secondMaxi==INT_MIN){
            return -1;
        }
        else{
            return secondMaxi;
        }
    }
};