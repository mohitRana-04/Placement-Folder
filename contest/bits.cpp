#include <bits/stdc++.h>
using namespace std;

int solve(int i){
	int k = 0;
        while(i){
            if(i%2 != 0){
                k++;
            }
            i = i/2;
        }
    return k;
}

int main(){
	for(int i = 0; i<10; i++){
		cout<<solve(i)<<endl;
	}
	return 0;
}