//pasted function after doing in interviewBit website
int Solution::firstMissingPositive(vector<int> &A) {
    sort(A.begin(),A.end());
    int n=A.size();
    int l=0;
    while(l<=n-1){
        if(A[l]<=0) l++;
        else break;
    }
    int no=1;
    while(l<=n-1){
        if(A[l]==no){
            l++;
            no++;
        }
        else break;
    }
    return no;
}
