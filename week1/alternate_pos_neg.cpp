// code executed in gfg website
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> pos;
        vector<int> neg;
        for(auto it:arr){
            if(it<0) neg.push_back(it);
            else pos.push_back(it);
        }
        int t=0;
        arr.clear();
        int l1=0,l2=0,r1=pos.size(),r2=neg.size();
        while(l1<r1 && l2<r2){
            if(t%2==0) arr.push_back(pos[l1++]);
            else arr.push_back(neg[l2++]);
            t++;
        }
        while(l1<r1){
            arr.push_back(pos[l1++]);
        }
        while(l2<r2){
            arr.push_back(neg[l2++]);
        }
    }
};