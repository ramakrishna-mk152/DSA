//pasted function after doing in interviewBit website
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long sumact=0,sum,sum2act=0,sum2;
    long long n=A.size();
    for(auto it:A){
        sumact+=it;
        sum2act+=1LL*it*it;
    }
    sum=n*(n+1)/2;
    sum2=n*(n+1)*(2*n+1)/6;
    int miss=((sum2-sum2act)/(sum-sumact)+(sum-sumact))/2;
    int repeat=miss-sum+sumact;
    vector<int> res;
    res.push_back(repeat);
    res.push_back(miss);
    return res;
    
    
}
