// User function Template for C++

class Solution {
  public:
    bool isPrime(int n)
    {
        if(n<=1) return false;
        if(n==2) return true;
        if(n%2==0) return false;
        
        for(int i = 3 ; i*i<=n ; i+=2)
        {
            if(n%i==0) return false;
        }
        
        return true;
    }
    int countPrimes(int L, int R) {
        int count=0;
        for(int i = L ; i<=R ; i++)
        {
            if(isPrime(i)) count++;
        }
        return count;
    }
};