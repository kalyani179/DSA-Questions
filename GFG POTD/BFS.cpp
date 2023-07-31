class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
       vector<int> res;
       bool visited[v+1];
       for(int i=0;i<v;i++){
           visited[i]=false;
       }
       queue<int> q;
       visited[0]=true;
       q.push(0);
       while(!q.empty()){
           int u=q.front();
           q.pop();
           res.push_back(u);
           for(int v:adj[u]){
               if(visited[v]==false){
                   visited[v]=true;
                   q.push(v);
               }
           }
       }
       return res;
    }
};