#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> memo{1005, vector<int>(1005, -1)};
int lcs(int x, int y, string s1, string s2)
{
    if (x==0 || y==0) return 0;
    if (memo[x][y] != -1) return memo[x][y];
    
    int ans = 0;
    if (s1[x-1] == s2[y-1]) {
        ans = 1 + lcs(x-1, y-1, s1, s2);
    }
    else {
        ans = max(ans, lcs(x-1, y, s1, s2));
        ans = max(ans, lcs(x, y-1, s1, s2));
    }
    
    return memo[x][y] = ans;
}

int main() {
    string s1, s2; 
    cin >> s1 >> s2;
    cout << lcs(s1.size(), s2.size(), s1, s2);
    return 0;
}