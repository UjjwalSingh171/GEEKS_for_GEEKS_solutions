class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        int maxp = arr[0];
        int minp = arr[0];
        int res = arr[0];
        
        for(int i = 1 ; i < n ; i++)
        {
            int current = arr[i];
            if(current<0)
            {
                swap(maxp,minp);
            }
            
            maxp = max(current,maxp*current);
            minp = min(current,minp*current);
            
            res = max(res,maxp);
        }
        return res;
    }
};