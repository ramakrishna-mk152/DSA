class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> res;
        int t = 0, b = row - 1, l = 0, r = col - 1;

        while (l <= r && t <= b) {


            for (int i = l; i <= r; i++) {
                res.push_back(matrix[t][i]);
            }
            t++;


            for (int i = t; i <= b; i++) {
                res.push_back(matrix[i][r]);
            }
            r--;
            if (t <= b) {
                for (int i = r; i >= l; i--) {
                    res.push_back(matrix[b][i]);
                }
                b--;
            }
            if (l <= r) {
                for (int i = b; i >= t; i--) {
                    res.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return res;
    }
};
