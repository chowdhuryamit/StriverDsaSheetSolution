class Solution {
  public:
    int largest(vector<int> &arr) {
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
};
