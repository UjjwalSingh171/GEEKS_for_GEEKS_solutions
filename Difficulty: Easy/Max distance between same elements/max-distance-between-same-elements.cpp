//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        int n = arr.size();
        int maxi = 0;
        map <int,int> mp;
        for(int i = n-1 ; i>=0 ; i--)
        {
            if(mp.find(arr[i])==mp.end())
            {
                mp[arr[i]]=i;
            }
        }
        for(int i = 0 ; i<n ; i++)
        {
            if(mp.find(arr[i])!=mp.end())
            {
                int count = mp[arr[i]]-i;
                maxi = max(maxi,count);
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);

        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends