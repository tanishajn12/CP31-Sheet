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
        ll n,c;
        cin >> n>>c;

        vector<ll> a(n);

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<ll> cost(n,0);

        for(int i = 0; i<n; i++) {
            cost[i] = i+1 + a[i];
        }

        sort(cost.begin(), cost.end()) ;


        ll count = 0;
        ll sum = 0;

        for(int i = 0; i<n; i++) {
            sum+=cost[i];

            if (sum>c)
            {
                break;
            }

            count++;
        }

        cout<<count<<endl;
       
    }

    return 0;
}
