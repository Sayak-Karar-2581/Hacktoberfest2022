#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // helper function for dfs traversal
    void dfsHelper(int i,vector<int>adj[],vector<int>&nodes,vector<int>&vis)
    {
        nodes.push_back(i);
        vis[i] = 1;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
                dfsHelper(it,adj,nodes,vis);
            }
        }
    }

    // method to print all connected components using dfs traversal
    vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
    {
        vector<vector<int>>ans;
        vector<int>nodes;
        vector<int>vis(V,0);
        vector<int>adj[V];
        for(int i=0;i<E;i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfsHelper(i,adj,nodes,vis);
                ans.push_back(nodes);
                nodes.clear();
            }
        }
        return ans;
    }
};
//driver code
int main()
{
    int V = 5,E = 4;
    vector<vector<int>>edges = {{0,2},{0,1},{1,2},{3,4}};
    Solution s;
    vector<vector<int>>ans = s.depthFirstSearch(V,E,edges);
    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
