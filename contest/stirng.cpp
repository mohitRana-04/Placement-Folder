#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v){
	
	for (int i = 0; i< v.size(); i++){
		rotate(v.begin(), v.begin()+1, v.end());
		for(auto x: v){
			cout<<x<<" ";
		}
		cout<<endl;
	}

}

int main(){
	vector<int> v = {31,72,79,25};
	// int n;
	solve(v);
	return 0;
}