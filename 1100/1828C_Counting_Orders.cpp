#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n), b(n);

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (ll i = 0; i < n; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll j = 0;
        vector<ll> res(n, 0);

        for (ll i = 0; i < n; i++) {
            while (j < n && a[j] <= b[i]) {
                j++;
            }

            if (j < n) {
                res[i] = n - j;
            }
        }

        for (ll i = 0; i < (ll)res.size(); i++) {
            cout<<res[i]<<" ";
        }
        cout<<endl;

        sort(res.begin(), res.end());
        ll ans = 1; 

        for (ll i = 0; i < (ll)res.size(); i++) {
            cout<<res[i]<<" ";
        }
        cout<<endl;

        for (ll i = 0; i < (ll)res.size(); i++) {
            ans = (ans * (res[i] - i) % mod) % mod;
        }

        cout << ans << endl;
        cout<<"----------------"<<endl;
    }

    return 0;
}
