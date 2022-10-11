#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    // method to return an array consisting of next greater elements. 
    vector<int> nextGreater(vector<int> &arr, int n) {
        stack<int>st;
        vector<int>nge(n,-1);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=arr[i])
            {
                st.pop();
            }
            if(!st.empty()) nge[i] = st.top();
            st.push(arr[i]);
        }
        return nge;
    }
};
//driver code
int main()
{

    int n = 4;
    vector<int>arr = {1,2,4,3};
    Solution s;
    vector<int>ans = s.nextGreater(arr,n);
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
    return 0;
}
