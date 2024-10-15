//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        // Your code here
        int n = arr.size();
        unordered_map<int,int> mp;
        mp[0]=1;
        int count = 0 ;
        int csum = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
            csum += arr[i];
            int remove = csum - tar;
            if(mp.find(remove)!=mp.end())
            {
                count += mp[remove];
            }
            mp[csum]++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int tar = stoi(ks);
        Solution obj;
        int res = obj.subArraySum(arr, tar);
        cout << res << endl;
    }
    return 0;
}
// } Driver Code Ends