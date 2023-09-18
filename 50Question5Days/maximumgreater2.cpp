#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums){
	int bucket1 = nums[0];
        int cnt1 = 1;
        int bucket2 = nums[0];
        int cnt2 = 0;
        for(int i = 1; i<nums.size(); i++){
            if(cnt1 == 0){
                bucket1 = nums[i];
                cnt1++;
            }
            else if(cnt2 == 0){
                bucket2 = nums[i];
                cnt2++;
            }
            else if(bucket1 == nums[i]){
                cnt1++;

            }else if(bucket2 == nums[i]){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
       // cout<<bucket1<<" "<<bucket2;
}

int main(){
	vector<int> v = {1,2,1, 4, 4};
	// int n;
	solve(v);
	return 0;
}