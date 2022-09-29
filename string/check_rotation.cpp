#include <bits/stdc++.h>
using namespace std;

bool solve(string& s, string& t) {
    int n = s.size(), m = t.size();
    if (n != m) return 0;
    return ((s+s).find(t) != string::npos);
}
    

int main() {
    string str1 = "AACD", str2 = "ACDA";
    cout << solve(str1, str2);

    return 0;
}
