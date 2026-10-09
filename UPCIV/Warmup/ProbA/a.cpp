#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	ll n; cin >> n;
	int ans = 0;
	while(n--){
		int x; cin >> x;
		if(x == 2) ans++;
	}
	cout << ans;
}
