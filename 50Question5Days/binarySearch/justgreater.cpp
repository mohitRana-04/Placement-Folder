#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int target){
	// just greater

	int l = 0, r = v.size()-1;
	while(l<=r){
		int mid = l+(r-l)/2;
		if(v[mid]<target){
			l = mid+1;
		}
		else{
			r = mid-1;
		}
	}
	cout<<r;
}

int main(){
	vector<int> v = {1,2,3,4,5,6,7,8};
	
	solve(v, 7);
	return 0;
}