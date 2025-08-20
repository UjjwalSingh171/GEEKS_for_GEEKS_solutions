class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int n = mat.size() ;
        int m = mat[0].size() ;
        vector<int> res   ;
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                res.push_back(mat[i][j]);
            }
        }
        sort(res.begin(),res.end());
        return res[(n*m)/2];
    }
};
