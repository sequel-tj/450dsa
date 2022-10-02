#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;

// permutations using swapping
void permutations(string s, int n, int index = 0) {
    if (index == n) {
        cout << s << endl;
    }
    else{
        for (int i=index; i<n; i++) {
            swap(s[i],s[index]);
            permutations(s,n,index+1);
            swap(s[i],s[index]);
        }
    }
}

// permutations using backtracking 
/*
void permutations(string s, int n, string res = "") {
    if (res.size() == n) {
        cout << res << endl;
        return;
    }

    for (int i=0; i<n; i++) {
        if (!visited[i]) {
            res += s[i];
            visited[i] = 1;
            permutations(s,n,res);
            visited[i] = 0; // backtrack
            res.erase(res.size()-1); // backtrack
        }
    }
}
*/

int main() {
    string s;
    cin >> s;

    int n = s.size();
    visited = vector<bool>(n);

    permutations(s,n);
    return 0;
}
