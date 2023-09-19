#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums2){
	vector<int> nge;
	int n = nums2.size();
		stack<int> st;
		for(int i = n-1; i>=0; i--){
			if(st.size() == 0) nge.push_back(-1);

			else{
				while( st.size() && nums2[i]>st.top()){
					st.pop();
				}
				if(st.size() == 0) nge.push_back(-1);
				else nge.push_back(st.top());
			}

			st.push(nums2[i]);
			
		}
		reverse(nge.begin(), nge.end());
	for(auto x: nge) cout<<x<<" ";

}

int main(){
	vector<int> v = {1,3,4,2};
	// cout<<"hello";
	solve(v);
	return 0;
}