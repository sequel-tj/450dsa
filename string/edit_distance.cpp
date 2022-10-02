#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> memo{501,vector<int>(501,-1)};
int editDistance(string s, string t, int i, int j) {
    if (i==0) return j;
    if (j==0) return i;

    if (memo[i][j] != -1) return memo[i][j];
    int ans = 0;

    if (s[i-1] == t[j-1]) ans = editDistance(s,t, i-1, j-1);
    else {
        ans = 1 + min(editDistance(s,t, i-1,j),
        min(editDistance(s,t, i-1,j-1), editDistance(s,t, i, j-1)));
    }

    return memo[i][j] = ans;
}

int main() {
    string s,t;
    cin >> s >> t;

    cout << editDistance(s,t,s.size(),t.size());
    return 0;
}
