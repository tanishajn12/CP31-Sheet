#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;

void solve() {
        ll n;
        cin >> n;

        vector<ll> c(n);

        for (ll i = 0; i < n; i++) {
            cin >> c[i];
        }

        //initial array -> [1]
        //first two numbers needs to be [1,1] -> no other allowed

        sort(c.begin(), c.end());

        ll max_val = 1;

        if(c[0]!=1) {
            cout<<"NO"<<endl;
            return;
        }

        for(int i = 1; i<n; i++) {
            if(c[i]>max_val) {
                cout<<"NO"<<endl;
                return;

            }

            max_val+=c[i];
        }

        cout<<"YES"<<endl;

        return;


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
