// User function Template for Java
class Solution {
    static boolean armstrongNumber(int n) {
        // code here
        int x = n;
        int digits = String.valueOf(x).length();
        boolean flag = false;
        int sum = 0;
        
        while(x>0){
            int last = x%10;
            sum += Math.pow(last,digits);
            x/=10;
        }
        
        if(sum==n) flag=true;
        return flag;
    }
}