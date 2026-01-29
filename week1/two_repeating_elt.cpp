#include<bits/stdc++.h>
using namespace std;
void printVector(const vector<int>& v) {
    for (int x : v) cout << x << " ";
    cout << "\n";
}
vector<int> repeatingelt(vector<int>& nums){
    unordered_set<int> hash;
    vector<int> res;
    for(auto it:nums){
        if(hash.count(it)==0){
            hash.insert(it);
        }
        else res.push_back(it);
    }
    return res;
}
int main() {
    vector<int> t1 = {1,2,3,2,3,4,5};
    cout << "Test 1:" << "\n";
    printVector(repeatingelt(t1));

}

