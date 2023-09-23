#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 50;
	vector<bool> v(n, true);
	

	for(int i = 2; i*i<=n; i++){
		if(v[i]){
			for(int j = i*i; j<n; j+=i){
				cout<<j<<endl;
				v[j] = false;
			}
		}
	}
	// for(auto x: v){
	// 	// cout<<x<<" "; 
	// }

	return 0;
}