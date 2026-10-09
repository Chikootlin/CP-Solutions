#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	string s; cin >> s;
	bool child = true;

	if(s.find('#') == string::npos){
		child = false;
	}else{
		for(int i=0; i < n; i++){
			if(isdigit(s[i])){
				child = false;
				break;
			}
			if(s[i] == 'A' || s[i] == 'I' || s[i] == 'U' || s[i] == 'E' || s[i] == 'O'){
				char c = s[i];
				int vowel = 0;
				while(s[i] == c){
					vowel++;
					i++;
				}
				if(vowel != 2){
					child = false;
					break;
				}
				i--;
			}	
		}
	}
	
	if(child){
		cout << "I will send it right now!";
	}else{
		cout << "You are not my child!";
	}
}
