#include <bits/stdc++.h>
using namespace std;

string countAndSay(int n) {
    if (n==1) return "1";
    string say = countAndSay(n-1);

    int cnt = 1;
    string ans = "";

    for (int i=0; i<say.size()-1; i++) {
        if (say[i]==say[i+1]) cnt++;
        else {
            ans += to_string(cnt);
            ans += say[i];
            cnt = 1;
        }
    }

    if (cnt > 1) {
        ans += to_string(cnt);
        ans += say[say.size()-1];
    }
    else {
        ans += "1";
        ans += say[say.size()-1];
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    cout << countAndSay(n);
    return 0;
}
