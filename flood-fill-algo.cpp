#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // method to calculate dfs
    void dfs(vector<vector<int>> &image, int x, int y, int color, int newColor, int dx[], int dy[])
    {
        if (x < 0 || x >= image.size() || y < 0 || y >= image[0].size())
            return;
        if (image[x][y] != color)
            return;
        image[x][y] = newColor;
        for (int di = 0; di < 4; di++)
        {
            dfs(image, x + dx[di], y + dy[di], color, newColor, dx, dy);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
    {
        if (image[x][y] == newColor)
            return image;
        int color = image[x][y];
        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, 1, 0, -1};
        dfs(image, x, y, color, newColor, dx, dy);
        return image;
    }
};
// driver code
int main()
{
    Solution s;
    int x, y;
    cin >> x >> y;
    vector<vector<int>> image(x,vector<int>(y));

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> image[i][j];
        }
    }
    int m, n, newcolor;
    cin >> m >> n >> newcolor;
    vector<vector<int>> ans = s.floodFill(image, m, n, newcolor);

    for (auto it : ans)
    {
        for (auto j : it)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
