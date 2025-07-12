class Solution {
  public:
  long long fact(int n , int r)
  {
      long long res = 1 ; 
      for(int i = 1 ; i<=r ; i++)
      {
          res *= n-i+1;
          res /= i;
      }
      return res;
  }
    int nCr(int n, int r) {
        // code here
        if(r>n) return 0;
        if(r==0 or r==n) return 1;
        
        r = std::min(r,n-r);
        
        long long ans = fact(n,r);
        
        return (int)ans;
    }
};