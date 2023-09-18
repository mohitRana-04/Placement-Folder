#include <bits/stdc++.h>
using namespace std;

int minLengthAfterRemovals(vector<int>& nums) {
    
    priority_queue<pair<int, int>> pq;

    unordered_map<int, int> mp;

    for(auto x: nums){
    	mp[x]++;
    }    

    for(auto x: mp){
    	pq.push({x.second, x.first});
    }

    while(pq.size()>1){
    	int freq1 = pq.top().first;
    	int item1 = pq.top().second;
    	pq.pop();

    	int freq2 = pq.top().first;
    	int item2 = pq.top().second;
    	pq.pop();

    	freq1--, freq2--;
    	if(freq1>0){
    		pq.push({freq1, item1});
    	}
    	if(freq2>0){
    		pq.push({freq2, item2});
    	}

    }
    cout<<pq.size()<<endl;
	          
}
int main(){
	vector<int> v ={1,1,1,1} ;
	// int n;
	cout<<minLengthAfterRemovals(v);
	return 0;
}