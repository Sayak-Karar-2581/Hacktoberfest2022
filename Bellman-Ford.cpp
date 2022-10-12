#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int bellmanFord(int n, int m, int src, int dest, vector<vector<int>> &edges)
    {
        vector<int> dist(n + 1, 1e9);
        dist[src] = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (dist[edges[j][0]] != 1e9 && dist[edges[j][0]] + edges[j][2] < dist[edges[j][1]])
                {
                    dist[edges[j][1]] = dist[edges[j][0]] + edges[j][2];
                }
            }
        }
        return dist[dest];
    }
};
//driver code
int main()
{
    int N, m;
    cin >> N >> m;
    int src, dest;
    cin >> src >> dest;

    vector<vector<int>> edges;

    for (int i = 0; i < m; ++i)
    {
        vector<int> temp;
        for (int j = 0; j < 3; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        edges.push_back(temp);
    }
    Solution obj;
    int res = obj.bellmanFord(N, m, src, dest, edges);

    cout << res << endl;

    return 0;
}
