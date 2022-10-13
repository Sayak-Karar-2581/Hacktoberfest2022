/*Given a weighted, undirected and connected graph of V vertices and an adjacency list adj where adj[i] is a list of lists containing two integers where the first integer of each list j denotes there is edge between i and j , second integers corresponds to the weight of that  edge . You are given the source vertex S and You to Find the shortest distance of all the vertex's from the source vertex S. You have to return a list of integers denoting shortest distance between each node and Source vertex S.*/
{
	public:
    vector <int> dijkstra(int n, vector<vector<int>> adj[], int s)
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> dis(n+1,INT_MAX);
        dis[s]=0;
        pq.push({0,s});
        while(!pq.empty())
        {
            int dist=pq.top().first;
            int prev=pq.top().second;
            pq.pop();
            for(auto it:adj[prev])
            {
                int next=it[0];
                int nextDis=it[1];
                if(dis[next]>dis[prev]+nextDis)
                {
                    dis[next]=dis[prev]+nextDis;
                    pq.push({dis[next],next});
                }
            }
        }
        return dis;
    }
};
