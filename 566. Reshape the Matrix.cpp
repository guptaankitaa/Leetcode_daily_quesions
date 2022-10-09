class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size(), o = m * n;
        if(r * c != o) return mat;
        vector<vector<int>> res(r, vector<int>(c, 0));
        for(int i = 0; i < o; i++) res[i / c][i % c] = mat[i / n][i % n];
        return res;
    }
};