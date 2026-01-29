class Solution{
public:
    vector<int> subarraySum(vector<int>&arr,int target){
        long long sum=0;
        int l=0;
        for(int r=0;r<arr.size();r++){
            sum+=arr[r];
            while(sum>target&&l<=r){
                sum-=arr[l++];
            }
            if(sum==target){
                return{l+1,r+1};
            }
        }
        return{-1};
    }
};
