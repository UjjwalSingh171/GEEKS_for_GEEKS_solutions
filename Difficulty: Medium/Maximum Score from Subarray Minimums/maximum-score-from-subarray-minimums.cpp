//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//#include<algorithm>
class Solution {
  public:
    
    int pairWithMaxSum(vector<int> &arr) 
    {
        int n = arr.size();
        if(n<2)
        {
            return -1;
        }
        int maxsum = arr[0]+arr[1];
        
       for(int i = 1 ; i<n-1 ; i++)
       {
           int cursum = arr[i]+arr[i+1];
           maxsum = max(maxsum,cursum);
       }
       return maxsum;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.pairWithMaxSum(nums) << endl;
    }
    return 0;
}

// } Driver Code Ends