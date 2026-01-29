class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i,j,k,l;
        long long sum;
        i=0;
        int n=nums.size();
        vector<vector<int>> res;
        while(i<n-3){
            j=i+1;
            while(j<n-2){
                k=j+1;
                l=n-1;
                while(k<l){
                    sum=1LL*nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum==target){
                        res.push_back({nums[i],nums[j],nums[k],nums[l]});
                        int prevk=nums[k];
                        while(nums[k]==prevk && k<l) k++;
                        int prevl=nums[l];
                        while(nums[l]==prevl && k<l) l--;
                    }
                    else if(sum>target) l--;
                    else k++;
                }
                int prevj=nums[j];
                while( j<n && nums[j]==prevj ) j++;
            }
            int previ=nums[i];
            while( i<n && nums[i]==previ) i++;
        }
        return res;
    }
};