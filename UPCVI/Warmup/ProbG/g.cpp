#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n; cin >> n;
	vector<ll> A(n);
	for(int i=0; i < n; i++) cin >> A[i];
	
	ll total = 0;
	for(int b = 0; b < 60; b++){
	    ll cnt = 0;
	    for(ll i=0; i < n; i++){
	        cnt += (A[i] >> b) & 1;
	    }
	    total += cnt * (n - cnt) << b;
	}
	cout << total;
}
