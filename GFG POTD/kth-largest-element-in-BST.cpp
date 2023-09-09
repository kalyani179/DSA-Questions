class Solution
{
    public:
    vector<int> inorder(vector<int> v,Node* root){
        if(root == NULL) return v;
        v = inorder(v,root->left);
        v.push_back(root->data);
        return inorder(v,root->right);
    }
    int kthLargest(Node *root, int K)
    {
        vector<int> v;
        vector<int> res= inorder(v,root);
        return res[res.size()-K];
    }
};
