// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif

//     int t;
//     cin >> t;

//     while (t--) {

//         ll n, q;
//         cin >> n >> q;

//         vector<ll> a(n);
//         for (ll i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         vector<ll> x(q);
//         for (ll i = 0; i < q; i++) {
//             cin >> x[i];
//         }

//         for (ll i = 0; i < q; i++) {
//             ll query = x[i];

//             ll power = (1LL << query);  // 2^query
//             ll add_value = (1LL << (query - 1));  // 2^(query-1)

//             for (ll j = 0; j < n; j++) {
//                 if (a[j] % power == 0) {
//                     a[j] += add_value;
//                 }
//             }
//         }

//         for (ll i = 0; i < n; i++) {
//             cout << a[i] << " "; 
//         } 
//         cout << endl;  
//     }

//     return 0;
// }


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

        vector<vector<int>> div(31);  // Stores indices of elements divisible by 2^b
        vector<int> done(n, 0);       // Track processed elements

        // Group elements based on divisibility
        for (int b = 30; b >= 0; b--) {
            for (int i = 0; i < n; i++) {
                if (done[i]) continue;  // Skip if already assigned
                if (a[i] % (1LL << b) == 0) {
                    done[i] = 1;
                    div[b].push_back(i);
                }
            }
        }

        // Step 2: Process queries efficiently
        for (auto e : x) {
            for (int b = e; b <= 30; b++) {
                for (auto i : div[b]) {
                    div[e - 1].push_back(i);  // Move index to div[e-1]
                    a[i] += (1LL << (e - 1)); // Increase value
                }
                div[b].clear();  // Clear processed elements
            }
        }

        // Step 3: Output the final updated array
        for (ll i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
