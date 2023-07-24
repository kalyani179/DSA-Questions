class Solution
{
    public:
    vector<int> v;
    void printRight(Node* root,int level){
        if(root == NULL) return;
        if(v.size()==level){
            v.push_back(root->data); 
        }
        printRight(root->right,level+1);
        printRight(root->left,level+1);
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       printRight(root,0);
       return v;
    }
};