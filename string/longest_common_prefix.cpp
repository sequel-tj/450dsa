#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int len = strs.size();
    int i=0, n = strs[0].size();
    while (i<n) {
        for (int j=1; j<len; j++) {
            if (i==strs[j].size() || strs[0][i] != strs[j][i]) {
                return strs[0].substr(0,i);
            }
        }
        i++;
    }
    return strs[0];
}

int main() {
    vector<string> strs = {"flower","flow","flowing"};
    cout << longestCommonPrefix(strs);
    return 0;
}