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
        ll n, c;
        cin >> n >> c;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll low = 0, high = 1e9;
        ll ans = 0;

        while (low <= high) {
            ll mid = low + (high - low) / 2;
            long double area = 0;  

            for (auto a : arr) {
                long double side = (long double)(a) + 2 * (long double)mid;
                area += side * side;
                
            }

            if (area == c) {
                ans = mid;
                break;
            } else if (area > c) {
                high = mid - 1;
            } else {
                ans = mid;
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
