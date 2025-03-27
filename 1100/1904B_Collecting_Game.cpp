#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i].first;
            v[i].second = i + 1; 
        }

        sort(v.begin(), v.end()); 

        vector<ll> pref(n + 1, 0); 

        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + v[i - 1].first;
        }

        vector<int> ans(n + 1, 0); 

        ans[v[n - 1].second] = n - 1;

        for (int i = n - 2; i >= 0; i--) {
            if (pref[i + 1] >= v[i + 1].first) {
                ans[v[i].second] = ans[v[i + 1].second];
            } else {
                ans[v[i].second] = i;
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
