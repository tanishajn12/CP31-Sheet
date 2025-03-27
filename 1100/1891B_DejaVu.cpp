#include <bits/stdc++.h>
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
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<ll> x(q);
        for (ll i = 0; i < q; i++) {
            cin >> x[i];
        }

        for (ll i = 0; i < q; i++) {
            ll query = x[i];
            ll power = (1LL << query);  // 2^query
            ll add_value = (1LL << (query - 1));  // 2^(query-1)

            for (ll j = 0; j < n; j++) {
                if (a[j] % power == 0) {
                    a[j] += add_value;
                }
            }
        }

        for (ll i = 0; i < n; i++) {
            cout << a[i] << " "; 
        } 
        cout << endl;  
    }

    return 0;
}
