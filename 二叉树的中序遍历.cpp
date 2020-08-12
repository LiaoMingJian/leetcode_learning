class Solution {
public:
	void mid_order(TreeNode* root, vector<int>& ret) {
		if (root == NULL) {
			return;
		}
		mid_order(root->left, ret);
		ret.push_back(root->val);
		mid_order(root->right, ret);
	}

	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> ret;
		if (!root) return ret;
		mid_order(root, ret);
		return ret;

	}
};


