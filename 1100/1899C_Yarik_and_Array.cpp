#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll sum = arr[0]; 
        ll max_sum = arr[0]; 

        // Kadane’s Algorithm with parity check
        for (int i = 1; i < n; i++) {
            if(sum<0) sum=0;
            sum+=arr[i];
            if (sum<0 || (abs(arr[i]) % 2) == abs((arr[i - 1]) % 2)) {
                sum=arr[i]; 
            }
            max_sum = max(max_sum, sum); 
        }

        cout << max_sum << "\n";
    }

    return 0;
}
