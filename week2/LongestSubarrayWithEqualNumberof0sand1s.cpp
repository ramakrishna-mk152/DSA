class Solution{
  public:
    int maxLen(vector<int>&arr){
        unordered_map<int,int>mp;
        int sum=0;
        int maxLen=0;
        for(int i=0;i<arr.size();i++){
            sum+=(arr[i]==0?-1:1);
            if(sum==0){
                maxLen=i+1;
            }
            if(mp.find(sum)!=mp.end()){
                maxLen=max(maxLen,i-mp[sum]);
            }else{
                mp[sum]=i;
            }
        }
        return maxLen;
    }
};
