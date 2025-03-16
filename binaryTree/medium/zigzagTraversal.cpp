#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
         TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
          return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        int idx=0;
        while(!q.empty()){
            int n=q.size();
            vector<int>v;
            for(int i=0;i<n;i++){
                TreeNode* front=q.front();
                q.pop();
                v.push_back(front->val);
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            if(idx%2!=0){
                reverse(v.begin(),v.end());
            }
            ans.push_back(v);
            idx++;
        }
        return ans;
    }
};