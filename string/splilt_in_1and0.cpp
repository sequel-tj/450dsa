#include <bits/stdc++.h>
using namespace std;

int maxSubStr(string str){
    int n=str.size();
    int cnt = 0;
    int ans = 0;

    for(auto i:str) {
        if (i=='0') cnt++;
        else cnt--;

        if (cnt == 0) ans++;
    }

    if (cnt != 0) return -1;
    return ans;
}

int main() {
    string s;
    cin >> s;

    cout<<maxSubStr(s);

    return 0;
}
