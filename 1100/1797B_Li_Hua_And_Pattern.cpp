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
        int n;
        cin >> n;

        int k;
        cin>>k;

        vector<vector<int>> grid(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for(int j = 0; j<n; j++) {
                cin>>grid[i][j];
            }
        }
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for(int j = 0; j<n; j++) {
                if(grid[i][j]!=grid[n-1-i][n-1-j]){
                    cnt++;
                }

            }
        }

        cnt = cnt/2;

        if(cnt > k) cout << "NO\n";
        else{
            k -= cnt;
            if(n & 1) cout << "YES\n";
            else cout << (k & 1 ? "NO\n" : "YES\n");
        }




       
    }

    return 0;
}
