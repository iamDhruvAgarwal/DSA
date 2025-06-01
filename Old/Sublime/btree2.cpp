#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x){
		// x = val;
		val = x;
		// cout << val;
		left = right = nullptr;
	}
};
void inorder(TreeNode* root){
	//left then root then right
	if (root == nullptr) return; 
	inorder(root->left);
	cout << root->val  << " ";
	inorder(root->right);
}
int main()

{

 #ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif
	TreeNode* root = new TreeNode(1);
	// root->val = new TreeNode(0);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	inorder(root);
	return 0;
}
