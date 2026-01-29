class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end());
        int x=0;
        int l=x+1;
        int n=arr.size(),sum;
        int r=arr.size()-1;
        while(x<n-2){
            l=x+1;
            r=n-1;
            while(l<r){
                sum=arr[x]+arr[l]+arr[r];
                if(sum==target) return true;
                else if(sum>target) r--;
                else l++;
            }
            while(x < n-1 && arr[x]==arr[x+1]){
                x++;
            }
            x++;
        }
        return false;
    }
};