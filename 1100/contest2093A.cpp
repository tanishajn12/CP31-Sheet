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
        int k;
        cin >> k;

        if(k==1){
            cout<<"YES"<<endl;
            continue;

        }

        if(k%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


        //k=2 -> (n,n) => 2*n
        //
        

       
    }

    return 0;
}
