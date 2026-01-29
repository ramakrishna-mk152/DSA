//pasted function after doing in interviewBit website
int Solution::repeatedNumber(const vector<int> &A) {
    int elt1=0,elt2=1;
    int cnt1=0,cnt2=0;
    for(auto it:A){
        if(cnt1==0 && it!=elt2){
            elt1=it;
            cnt1++;
        }
        else if(cnt2==0 && it!=elt1){
            elt2=it;
            cnt2++;
        }
        else if(it==elt1) cnt1++;
        else if(it==elt2) cnt2++;
        else{
            cnt1--;
            cnt2--;
            
        }
        
    }
    cnt1=0;cnt2=0;
    int n=A.size();
    for(int i=0;i<n;i++){
        if(A[i]==elt1) cnt1++;
        else if(A[i]==elt2) cnt2++;
    }
    if(cnt1>n/3) return elt1;
    else if(cnt2>n/3) return elt2;
    else return -1;
    
}
