class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        int sum=0;
        for(auto it:nums){
            sum+=it;
            if(sum>max) max=sum;
            if(sum<0) sum=0;
        }
        return max;
    }
};