#include <bits/stdc++.h>
using namespace std;
//Implementing the tree once again after 10 days
struct TreeNode{
	int val;
	TreeNode*left;
	TreeNode*right;
	TreeNode(int x){
		val = x;
		right = left = nullptr;
	}
};
void inOrder(TreeNode * root){
	if(root == nullptr) return;
	inOrder(root->left);
	cout << root->val << " ";
	inOrder(root->right);
}

int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
TreeNode*root = new TreeNode(0);
root->left = new TreeNode(10);	
root->left->left = new TreeNode(1);
root->right = new TreeNode(1);
root->right->right = new TreeNode(1);
	// TreeNode* root = new TreeNode(6);
	// root->left = new TreeNode(3);
	// root->right = new TreeNode(4);
	// root->left->left = new TreeNode(1);
	// root->left->right = new TreeNode(2);
inOrder(root);
	return 0;
}
