#include <bits/stdc++.h>
using namespace std;
int sum = 0;
//creating our Btree
struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x){
		val = x;
		left = right = nullptr;
	}
};
void preorder(TreeNode* root){
	if (root == nullptr) return;  // Base case: Stop if node is null
	cout << root->val << " ";
	sum+=root->val;
	preorder(root->left);
	preorder(root->right);
	cout << sum << " L ";
}
void inorder(TreeNode* root){
	if (root == nullptr) return;  // Base case: Stop if node is null
	inorder(root->left);
	cout << root->val << " ";
	inorder(root->right);
}
void postorder(TreeNode* root){
	if (root == nullptr) return;  // Base case: Stop if node is null
	postorder(root->left);
	postorder(root->right);
	cout << root->val << " ";
}
int main() {
	// your code goes here
	 #ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
	preorder(root);cout << endl;
	inorder(root);cout << endl;
	postorder(root);cout << endl;
	cout << "Dhruv" <<  sum;
	return 0;
}
