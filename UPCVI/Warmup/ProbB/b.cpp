#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n, m, x; cin >> n >> m >> x;
	int tot = n * m;
	ll ans = 0;
	while(tot--){
		int n; cin >> n;
		if(n == 1){
			ans += x;
		}
	}
	cout << ans;
}
