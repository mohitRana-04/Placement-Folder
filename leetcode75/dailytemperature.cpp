#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v){
	// pair<int, int> = value, index
	stack<pair<int, int>> st;
	vector<int> ans;

	for(int i = v.size()-1; i>=0; i--){
		// cout<<v[i];
		if(st.size() == 0){
			ans.push_back(0);
		}
		else{
			while(v[i]>st.top().first && st.size()){
				st.pop();
			}
			if(st.size() == 0){
				ans.push_back(0);
			}
			else{
				ans.push_back(st.top().second - i);
			}
		}

		st.push({v[i], i});
	}
	reverse(ans.begin(), ans.end());

	for(auto x: ans) cout<<x<<" ";
}

int main(){
	vector<int> v = {73,74,75,71,69,72,76,73};
	
	solve(v);
	return 0;
}