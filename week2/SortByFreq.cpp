class Solution{
  public:
    vector<int> sortByFreq(vector<int>&arr){
        unordered_map<int,int>mpp;
        for(int x:arr){
            mpp[x]++;
        }

        vector<pair<int,int>>v;
        for(auto it:mpp){
            v.push_back({it.first,it.second});
        }

        sort(v.begin(),v.end(),[](pair<int,int>&a,pair<int,int>&b){
            if(a.second!=b.second){
                return a.second>b.second;
            }
            return a.first<b.first;
        });

        vector<int>res;
        for(auto it:v){
            while(it.second--){
                res.push_back(it.first);
            }
        }
        return res;
    }
};
