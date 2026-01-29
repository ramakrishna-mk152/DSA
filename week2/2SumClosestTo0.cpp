class Solution{
  public:
    int closestToZero(int arr[],int n){
        sort(arr,arr+n);
        int i=0,j=n-1;
        int res=INT_MAX;
        int maxi=INT_MIN;

        while(i<j){
            int sum=arr[i]+arr[j];

            if(abs(sum)<abs(res)){
                res=sum;
                maxi=sum;
            }
            else if(abs(sum)==abs(res)){
                maxi=max(maxi,sum);
            }

            if(sum<0) i++;
            else j--;
        }
        return maxi;
    }
};
