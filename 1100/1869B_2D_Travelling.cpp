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
		ll n,k,a,b;
		cin>>n>>k>>a>>b;

		vector<ll> x(n+1), y(n+1);

		for(ll i = 1; i<=n; i++) {
			cin>>x[i]>>y[i];
		}


		ll price = abs(x[a]-x[b]) + abs(y[a]-y[b]);
		
		if (k == 0) {
            cout << price << endl;
            continue;
        }
		
		//find closest major city to source and cost to reach there
		ll cost_A = LLONG_MAX;

		//closest major city to dest and cost to reach des from major city
		ll cost_B= LLONG_MAX;

		for(ll city = 1; city<=k; city++) {
			cost_A = min(cost_A, abs(x[a] - x[city]) + abs(y[a]-y[city]));


			cost_B = min(cost_B, abs(x[b] - x[city]) + abs(y[b]-y[city]));
		}

		cout<<min(price, cost_A+cost_B)<<endl;


	}


	return 0;
}