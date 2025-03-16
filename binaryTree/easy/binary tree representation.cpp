#include<bits/stdc++.h>
using namespace std;
struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}
class Solution{
public:

    void create_tree(node* root0, vector<int> &vec){
        //Your code goes here
        int i=1;
        int n=vec.size();
        queue<node*>q;
        q.push(root0);
        while(!q.empty()){
            node* front=q.front();
            q.pop();
            if(i<n){
                node* leftNode=newNode(vec[i]);
                i++;
                front->left=leftNode;
                q.push(leftNode);
            }
            if(i<n){
                node* rightNode=newNode(vec[i]);
                i++;
                front->right=rightNode;
                q.push(rightNode);
            }
            if(i==n){
                break;
            }
        }
    }

};