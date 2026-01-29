//below code executed in gfg website
class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
        vector<int> res;
        map<int,int> hash;
        for(auto it:arr){
            hash[it]++;
        }
        for(auto it:hash){
            if(it.second==1) res.push_back(it.first);
        }
        return res;
    }
};