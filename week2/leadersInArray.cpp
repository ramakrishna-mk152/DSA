class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      int max=INT_MIN;
      vector<int> res;
      for(int i=nums.size()-1;i>-1;i--){
        if(nums[i]>max){
            max=nums[i];
            res.push_back(max);
        }
      }
      reverse(res.begin(),res.end());
      return res;

    }
};