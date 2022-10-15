#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<ll, ll> getMinMax(ll a[], int n) {
    ll Max = a[0], Min = a[0];
    for (int i=1; i<n; i++) {
        Max = max(Max, a[i]);
        Min = min(Min, a[i]);
    }
    return {Min,Max};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}