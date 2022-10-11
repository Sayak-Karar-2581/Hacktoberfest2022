#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    //method to return shortest path of every node from source node using dijkstra's algo
    vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
        vector<int>dist(vertices,INT_MAX);
        vector<pair<int,int>>adj[vertices];
        for(int i=0;i<edges;i++)
        {
            adj[vec[i][0]].push_back({vec[i][1],vec[i][2]});
            adj[vec[i][1]].push_back({vec[i][0],vec[i][2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,source});
        dist[source] = 0;
        while(!pq.empty())
        {
            int distance = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            for(auto it:adj[node])
            {
                if(distance + it.second < dist[it.first])
                {
                    dist[it.first] = distance + it.second;
                    pq.push({dist[it.first],it.first});
                }
            }
        }
        return dist;
    }
};
//driver code
int main()
{
    int V = 4,E = 5;
    vector<vector<int>>edges = {{0,1,5},{0,2,8},{1,2,9},{1,3,2},{2,3,6}};
    Solution s;
    vector<int>ans = s.dijkstra(edges,V,E,0);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
