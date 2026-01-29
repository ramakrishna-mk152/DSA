class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        int n=arr.size();
        if(n<3) return {};

        vector<int> lm(n);
        vector<int> rm(n);

        lm[0]=arr[0];
        for(int i=1;i<n;i++){
            lm[i]=min(lm[i-1],arr[i]);
        }

        rm[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            rm[i]=max(rm[i+1],arr[i]);
        }

        for(int x=1;x<n-1;x++){
            if(lm[x-1]<arr[x] && arr[x]<rm[x+1]){
                return {lm[x-1],arr[x],rm[x+1]};
            }
        }

        return {};
    }
};
