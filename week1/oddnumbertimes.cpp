#include<bits/stdc++.h>
using namespace std;
int oddno(vector<int>& nums){
    int res=0;
    for(auto it:nums){
        res^=it;
    }
    return res;
}
int main() {

    vector<int> t1 = {1, 2, 3, 2, 1};
    cout << "Test 1:" << oddno(t1) << "\n";

    vector<int> t2 = {4, 1, 2, 1, 2};
    cout << "Test 2:" << oddno(t2) << "\n";

    vector<int> t3 = {10};
    cout << "Test 3:" << oddno(t3) << "\n";

    vector<int> t4 = {-1, -2, -2, -1, -3};
    cout << "Test 4:" << oddno(t4) << "\n";


    vector<int> t5 = {5, 7, 5, 7, 5};
    cout << "Test 5:" << oddno(t5) << "\n";

}

