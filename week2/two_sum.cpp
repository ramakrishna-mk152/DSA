class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        int l=0;
        int r=arr.size()-1;
        int sum;
        while(l<r){
            sum=arr[l]+arr[r];
            if(sum<target) l++;
            else if(sum>target) r--;
            else return true;
        }
        return false;
        
    }
};