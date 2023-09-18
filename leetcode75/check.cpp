#include <bits/stdc++.h>
using namespace std;



int main(){
	
	string s = "zigram data";
	char c = 'a';
	int cnt = 0;
	for(auto x: s){
		if(x == c) cnt++;
	}
	cout<<cnt;

	return 0;
}