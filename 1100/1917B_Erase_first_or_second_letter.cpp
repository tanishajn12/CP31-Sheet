#include<bits/stdc++.h>
using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;


    while(t--) {
    	int n;
    	cin>>n;

    	string s;
    	cin>>s;

    	vector<int> f(26);

    	long long ans = 0;

    	for(int i = 0; i<n; i++) {
    		if(!f[s[i]-'a']) {
    			f[s[i]-'a'] = 1;


    			ans+= (n-i);
    		}
    	}

    	cout<<ans<<endl;
    }

    return 0;



}
