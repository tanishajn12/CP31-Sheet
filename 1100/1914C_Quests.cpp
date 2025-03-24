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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        ll ans = LLONG_MIN, sum = 0, maxi = b[0];

        for (int i = 0; i < min(n, k); i++) {  // Ensures we do not exceed 'k' steps
            sum += a[i];
            maxi = max(maxi, b[i]);

            ans = max(ans, sum + (k - (i + 1)) * maxi); // Ensure (k - (i + 1)) is non-negative
        }

        cout << ans << endl;
    }

    return 0;
}
