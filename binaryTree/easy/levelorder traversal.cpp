#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
  right(right) {}
  };
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL) {
            return ans;
        } else {
            vector<int> v;
            queue<TreeNode*> q;
            q.push(root);
            q.push(NULL);
            while(!q.empty()){
                TreeNode* front=q.front();
                q.pop();
                if(front==NULL){
                    ans.push_back(v);
                    v.clear();
                    if(!q.empty()){
                        q.push(NULL);
                    }
                }
                else{
                    v.push_back(front->val);
                    if(front->left!=NULL){
                        q.push(front->left);
                    }
                    if(front->right!=NULL){
                        q.push(front->right);
                    }
                }
            }
            return ans;
        }
    }
};