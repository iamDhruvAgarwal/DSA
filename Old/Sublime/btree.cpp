#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x){
		val = x;
		left = right = nullptr;
	}
};
void preorder(TreeNode* root) {
    if (root == nullptr) return;  // Base case: Stop if node is null
    
    cout << root->val << " ";  // Print the current node value
    preorder(root->left);      // Recursively traverse left subtree
    preorder(root->right);     // Recursively traverse right subtree
}
void inorder(TreeNode* root) {
    if (root == nullptr) return;

    inorder(root->left);       // First, traverse left subtree
    cout << root->val << " ";  // Then visit root
    inorder(root->right);      // Finally traverse right subtree
}
void postorder(TreeNode* root) {
    if (root == nullptr) return;

    postorder(root->left);     // First left subtree
    postorder(root->right);    // Then right subtree
    cout << root->val << " ";  // Finally visit root
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
	 cout << "Preorder Traversal: ";
    preorder(root); cout << endl;
    inorder(root);cout << endl;
    postorder(root);
	return 0;
}
