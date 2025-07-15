class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        vector<int> res;
        int m = mat.size();
        if(m==0) return res;
        int n = mat[0].size();
        int top = 0 , bottom = m-1 , left = 0 , right = n-1; 
        while( top<=bottom and left<=right )
        {
            for(int i = left ; i<=right ; i++)
            {
                res.push_back(mat[top][i]);
            }
            top++;
            for(int i = top ; i<=bottom ; i++)
            {
                res.push_back(mat[i][right]);
            }
            right--;
            if(top<=bottom)
            {
                for(int i = right ; i>=left ; i--)
                {
                    res.push_back(mat[bottom][i]);
                }
                bottom--;
            }
            if(left<=right)
            {
                for(int i = bottom ; i>=top ; i--)
                {
                    res.push_back(mat[i][left]);
                }
                left++;
            }
        }
        return res;
    }
};