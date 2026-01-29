//below code executed in gfg website
class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        // code here
        vector<int> odd;
        sort(arr.begin(),arr.end());    
        int k=0;
        for(auto it:arr){
            if(it%2==1) odd.push_back(it);
            else arr[k++]=it;
        }
        for(auto it:odd) arr[k++]=it;
    }
};