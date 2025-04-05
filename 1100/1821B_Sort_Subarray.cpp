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
        ll n;
        cin >> n;

        vector<ll> a(n);
        vector<ll> a1(n);

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> a1[i];
        }


        ll first=-1, second=-1, first1=-1, second1=-1;
        for(ll i = 0; i<n; i++) {
            if(a[i]!=a1[i]) {
                first = i;
                break;
            }
        }

        for(ll i = n-1; i>=0; i--) {
            if(a[i]!=a1[i]) {
                second = i;
                break;
            }
        }

        for(ll i = first; i>0; i--) {
            if(a1[i]>= a1[i-1]) {
                first1 = i-1;

            }
            else{ 
                break;
            }
        }

        for(ll i = second; i<(n-1); i++) {
            if(a1[i] <=a1[i+1]) {
                second1=i+1;
            }
            else{
                break;
            }
        }

        if(first1!=-1) {
            cout<<first1+1;
        }
        else{
            cout<<first+1;
        }
        cout<<" ";
        if(second1!=-1) {
            cout<<second1+1;
        }
        else{
            cout<<second+1;
        }
       
        cout<<endl;
    }

    return 0;
}
