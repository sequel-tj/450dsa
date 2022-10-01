#include <bits/stdc++.h>
using namespace std;

void orderwise_subsequence(string & s, string res, int index, int n) {
    if (index==n) return;

    if (res.empty() == false) cout << res << "\n";

    for (int i=index+1; i<n; i++) {
        res += s[i];
        orderwise_subsequence(s,res,i,n);
        res = res.erase(res.size()-1);
    }
}

int main() {
    string s = "abc";
    cin >> s;
    string ans = "";
    orderwise_subsequence(s,ans,-1,s.size());

    return 0;
}
