#include <bits/stdc++.h>
using namespace std;

string longest_palindrome(string & s) {
    int n = s.size();
    int start = 0, pal_len = 1;

    for (int mid = 0; mid < n; ++mid) {
        // for even length
        int l=mid-1, r=mid;
        while(l>=0 and r<n and s[l] == s[r]) {
            if (pal_len < r-l+1) {
                pal_len = r-l+1;
                start = l;
            }
            l--,r++;
        }

        // for odd length
        l = mid-1, r = mid+1;
        while(l>=0 and r<n and s[l] == s[r]) {
            if (pal_len < r-l+1) {
                pal_len = r-l+1;
                start = l;
            }
            l--,r++;
        }
    }

    return s.substr(start,pal_len);
} 

    

int main() {
    string s = "aaaabbaa";
    cin >> s;
    cout << longest_palindrome(s);

    return 0;
}
