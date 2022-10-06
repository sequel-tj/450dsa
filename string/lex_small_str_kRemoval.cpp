#include <bits/stdc++.h>
using namespace std;

string lexicographicallySmallest(string s, int k) {
        int n = s.size();
        if (floor(log2(n)) == ceil(log2(n))) k /= 2;
        else k *= 2;
        
        if (n<=k) return "-1";
        
        stack<char> st;
        st.push(s[0]);
        
        for(int i=1; i<n; i++) {
            while(!st.empty() and k>0 and st.top() > s[i]) {
                st.pop();
                k--;
            }
            st.push(s[i]);
        }
        
        string ans = "";
        while(!st.empty()) {
            ans = st.top()+ans;
            st.pop();
        }
        
        return ans.substr(0,ans.size()-k);
    }

int main() {
    string s; cin >> s;
    int k; cin >> k;

    cout << lexicographicallySmallest(s,k);

    return 0;
}