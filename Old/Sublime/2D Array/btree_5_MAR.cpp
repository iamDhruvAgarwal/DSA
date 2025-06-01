#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x){
		val = x;
		left = right = nullptr;
	}
};
void inorder(TreeNode* root){
	if(root == nullptr) return;
	inorder(root->left);
	cout << root-> val << " ";
	inorder(root->right);
}

int main() {
	// your code goes here
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif
	TreeNode* root = new TreeNode(6);
	root->left = new TreeNode(3);
	root->right = new TreeNode(4);
	root->left->left = new TreeNode(1);
	root->left->right = new TreeNode(2);
	inorder(root);
	return 0;
}
