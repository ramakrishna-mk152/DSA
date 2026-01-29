vector<int> diagonalTraversal(vector<vector<int>>&mat){
    int n=mat.size();
    int m=mat[0].size();
    vector<int>ans;
    for(int d=0;d<=n+m-2;d++){
        for(int i=0;i<n;i++){
            int j=d-i;
            if(j>=0&&j<m){
                ans.push_back(mat[i][j]);
            }
        }
    }
    return ans;
}
