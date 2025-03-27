#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	int t;
	cin>>t;

	while(t--) {
		ll n;
		cin>>n;

		ll ans=0;


		vector<ll> arr(n);
		for(int i=0; i<n; i++) {
			cin>>arr[i];
		}

		vector<ll> pref_sum(n);
		pref_sum[0]=arr[0];

		for(int i = 1; i<n; i++) {
			pref_sum[i] = pref_sum[i-1] + arr[i];
		}
		

		for(ll i = 1; i<=n; i++) {
			
			if(n%i==0) {
				vector<ll> v;

				for(ll j = i; j<=n; j+=i) {
					ll sum = pref_sum[j - 1];
                    if (j - i > 0) {
                        sum -= pref_sum[j - i - 1];
                    }
                    v.push_back(sum);
				}

				sort(v.begin(), v.end());

				if (!v.empty()) { 
                    ans = max(ans, v.back() - v.front());
                }


			}
		}

		cout<<ans<<endl;


	}


	return 0;
}