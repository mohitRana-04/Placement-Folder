#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int target){
	int l = 0, r = v.size()-1;

	while(l<=r){
		int mid = l+(r-l)/2;
		if(v[mid]>= target){
			r = mid-1;
		}
		else{
			l = mid+1;
		}
	}
	cout<<l;
}

int main(){
	vector<int> v = {7};
	solve(v, 7);
	return 0;
}