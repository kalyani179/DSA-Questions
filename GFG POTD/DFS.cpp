class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> res;
    void DFSRec(vector<int> adj[],int s,bool visited[]){
        visited[s]=true;
        res.push_back(s);
        for(int u:adj[s]){
            if(visited[u]==false){
                DFSRec(adj,u,visited);
            }
        }
    }
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        bool visited[v];
        for(int i=0;i<v;i++){
            visited[i]=false;
        }
        DFSRec(adj,0,visited);
        return res;
    }
};