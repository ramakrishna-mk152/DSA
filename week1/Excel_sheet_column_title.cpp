class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";
        int rem,num;
        num=columnNumber;
        do{
            num--;
            rem=num%26;
            res+=('A'+rem);
            num=num/26;
        }while(num>0);
        reverse(res.begin(),res.end());
        return res;
    }
};