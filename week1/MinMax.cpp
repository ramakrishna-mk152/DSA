//below code executed in gfg website
class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector<int> res;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(auto it:arr){
            if(it<mini){
                mini=it;
            }
            if(it>maxi){
                maxi=it;
            }
        }
        res.push_back(mini);
        res.push_back(maxi);
        return res;
    }
};