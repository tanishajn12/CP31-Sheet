// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
// 	#ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif

// 	int t;
// 	cin>>t;

// 	while(t--) {
// 		ll n,k;
// 		cin>>n>>k;

// 		vector<ll> arr(n);

// 		for(ll i = 0; i<n; i++) {
// 			cin>>arr[i];
// 		}

// 		sort(arr.begin(), arr.end());

// 		ll sum = 0;
// 		for(auto &num : arr) {
// 			sum+=num;
// 		}

// 		for(int i = 0; i<k && arr.size()>=2 ; i++){

// 			ll min1 = arr[0];
// 			ll min2 = arr[1];

// 			ll maxi = arr.back();


// 			if(min1+min2< maxi) {
// 				arr.erase(arr.begin(), arr.begin()+2); //erase first 2 min element
// 				sum-=(min1+min2);
// 			}
// 			else {
// 				arr.pop_back();
// 				sum-=maxi;
// 			}

// 			if (arr.size() < 2) break; // Prevent invalid access
// 		}

// 		cout<<sum<<endl;


// 	}


// 	return 0;
// }


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
		ll n,k;
		cin>>n>>k;

		vector<ll> arr(n);

		for(ll i = 0; i<n; i++) {
			cin>>arr[i];
		}
		vector<ll> pre(n+1);

		sort(arr.begin(), arr.end());

		ll sum = 0;
		for(int i = 0; i<n; i++) {
			sum+=arr[i];
			pre[i+1]=pre[i]+arr[i];
		}

		// for(int i = 0; i<=n; i++) {
		// 	cout<<pre[i]<<" ";
		// }



		ll maxi = 0;
		for(int i = 0; i <=k; i++){
			maxi = max(maxi, pre[n-i]-pre[2*(k-i)]); 
                         
			
		}

		cout<<maxi<<endl;


	}


	return 0;
}