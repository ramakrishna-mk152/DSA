class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p=1,s=1;
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            p*=nums[i];
            s*=nums[n-i-1];
            maxi=max(maxi,max(p,s));
            if(p==0) p=1;
            if(s==0) s=1;

        }
        return maxi;
    }
};