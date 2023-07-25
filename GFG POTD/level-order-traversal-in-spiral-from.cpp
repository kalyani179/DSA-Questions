vector<int> findSpiral(Node *root)
{
    int level = 1; queue<Node*> q; vector<int> ans;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        level++;
        vector<int> v;
        for(int i=0;i<n;i++){
            Node* temp = q.front(); q.pop();
            v.push_back(temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        if(level%2==0){
              reverse(v.begin(),v.end());
             for(auto x:v){
                ans.push_back(x);
            }
        }
        else{
             for(auto x:v){
                ans.push_back(x);
            }
        }
    }
    return ans;
}
