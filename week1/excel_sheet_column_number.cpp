class Solution {
private:
    int power(int number,int deg){
        int res=1;
        for(int i=1;i<=deg;i++) res*=number;
        return res;
    }
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        int res=0;
        for(auto it:columnTitle){
            res+=(it-'A'+1)*power(26,n-1);
            n=n-1;
        }
        return res;
    }
};