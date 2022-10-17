#include<bits/stdc++.h>
using namespace std;
const long long int M = 1e9+7;

int recur_binary_expo(int a, int b)
{
    if(b == 0) return 1;
    long res = recur_binary_expo(a, b/2);
    if(b & 1)
    {
        return a * res * res;
    }
    else{
        return res * res;
    }
}


int main()
{
     cout << recur_binary_expo(2, 13) << endl;
    
}
