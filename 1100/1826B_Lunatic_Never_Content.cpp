#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;

ll compute_gcd(vector<ll> &abs_diff, ll maxi) {
    ll result = 0;
    for (ll num : abs_diff) {
        if (result == 0) {
            result = num;
        } else {
            while (num) {
                ll temp = result % num;
                result = num;
                num = temp;
            }
        }
    }
    return result;
}

// //using euclidean algorithm
// ll gcd(ll a, ll b) {
//     while (b) {
//         a = a % b;
//         swap(a, b);
//     }
//     return a;
// }


// ll compute_gcd(vector<ll> &abs_diff) {
//     ll result = 0;
//     for (ll num : abs_diff) {
//         result = gcd(result, num);
//     }
//     return result;
// }


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

        vector<ll> a(n);

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<ll> abs_diff;

        for(int i = 0; i<n/2; i++) {
            ll abs_d = abs(a[i] - a[n-1-i]);
            abs_diff.push_back(abs_d);
        }

        ll gcd_value = compute_gcd(abs_diff);


        cout<<gcd_value<<endl;

       
    }

    return 0;
}
