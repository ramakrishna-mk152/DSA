int Solution::threeSumClosest(vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int closestSum = arr[0] + arr[1] + arr[2];
    for(int x = 0; x < n - 2; x++) {
        int l = x + 1;
        int r = n - 1;
        while(l < r) {
            int sum = arr[x] + arr[l] + arr[r];
            if(abs(target - sum) < abs(target - closestSum)) {
                closestSum = sum;
            }
            if(sum == target) {
                return sum;
            }
            else if(sum > target) {
                r--;
            }
            else {
                l++;
            }
        }
    }
    return closestSum;
}
