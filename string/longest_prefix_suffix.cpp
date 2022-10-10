#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int n = s.size();
    vector<int> lps(n);
    int i=1, j=0;
    while (i<n) {
        if (s[i]==s[j]) {
            j++;
            lps[i] = j;
            i++;
        }
        else {
            if (j==0) {
                lps[i] = 0;
                i++;
            }
            else {
                j = lps[j-1];
            }
        }
    }
    return lps[n-1];
}

int main() {
    string s; 
    cin >> s;
    cout << solve(s); 

    return 0;
}