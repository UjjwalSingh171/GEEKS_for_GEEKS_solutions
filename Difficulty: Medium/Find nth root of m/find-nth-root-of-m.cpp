class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        if(m==0 or m==1) return m;
        int left = 1 , right = m ;
        while(left<=right){
            long long mid = left+(right-left)/2;
            long long x = pow(mid,n);
            if(x==m) return mid;
            else if(x<m) left=mid+1;
            else right=mid-1;
        }
        return -1;
    }
};