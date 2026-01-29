//below code executed on leetcode
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        for (auto it:nums) {
            if (hash.count(it))
                return it;
            hash.insert(it);
        }
        return -1;
    }
};