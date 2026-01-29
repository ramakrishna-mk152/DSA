//below code executed in gfg website
class Solution {
  public:
    vector<int> twoOddNum(vector<int>& arr) {
        vector<int> res;
        map<int,int> hash;
        for(auto it:arr){
            hash[it]++;
        }
        for(auto it:hash){
            if(it.second%2==1) res.push_back(it.first);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};