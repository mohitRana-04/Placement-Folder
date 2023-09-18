class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadane
        int csum = 0;
        int fsum = INT_MIN;
        for(auto x: nums){
            csum +=x;
            fsum = max(fsum, csum);
            if(csum <= 0) csum = 0;
           
        }
        return fsum;
    }
};