class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long rev=0;
        int cpy=x;
        while(cpy>0){
            rev=10*rev+(cpy%10);
            cpy/=10;
        }
        return rev==x;
    }
};