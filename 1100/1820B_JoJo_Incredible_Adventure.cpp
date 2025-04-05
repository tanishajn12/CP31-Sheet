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
        string s;
        cin >> s;
        ll n = s.length();

        ll longest = 0, current = 0, count = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                count++; 
                longest = max(longest, current);
                current = 0;
            } else {
                current++;
            }
        }
        longest = max(longest, current); 

        // If there are no zeros (i.e., string is all '1')
        if (count == 0) {
            ll ans = n * n;  
            cout << ans << endl;
            continue;
        }

        ll prefix = 0, suffix = 0;

        for (int i = 0; i < n && s[i] == '1'; i++)
            prefix++;

        for (int i = n - 1; i >= 0 && s[i] == '1'; i--)
            suffix++;

        longest = max(longest, prefix + suffix);

        ll max_prod = 0;

        for(ll i = 1; i<=longest; i++) {
            max_prod = max(max_prod, i*(longest-i+1));

        }

        cout<<max_prod<<endl;
    }

    return 0;
}
