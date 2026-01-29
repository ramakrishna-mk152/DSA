#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>& nums){
    int res=0;
    for(auto it:nums){
        res^=it;
    }
    int n=nums.size();
    for(int i=1;i<=n+1;i++) res^=i;
    return res;
}
int main() {

    vector<int> t1 = {1, 2, 3, 4};
    cout << "Test 1:" << missing(t1) << "\n";

    vector<int> t2 = {5, 1, 2, 3, 6};
    cout << "Test 2:" << missing(t2) << "\n";


}

