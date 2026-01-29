class Solution{
  public:
    int rowWithMax1s(vector<vector<int>>& arr){
        int res=-1;
        int maxi=0;
        int r=arr.size();
        int c=arr[0].size();

        for(int i=0;i<r;i++){
            int count=0;
            for(int j=0;j<c;j++){
                if(arr[i][j]==1){
                    count++;
                }
            }
            if(count>maxi){
                maxi=count;
                res=i;
            }
        }
        return res;
    }
};
