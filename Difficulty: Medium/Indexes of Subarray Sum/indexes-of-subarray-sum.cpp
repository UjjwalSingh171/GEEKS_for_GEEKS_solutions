//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int s) {
        // code here
        int n = arr.size();
        vector<int> v;
        for(int i = 0 ; i<n ; i++)
        {
            int sum = 0;
            for(int j = i ; j<n ; j++)
            {
                sum += arr[j];
                if(sum==s)
                {
                    v.push_back(i+1);
                    v.push_back(j+1);
                    return v;
                }
                if(sum>s)
                {
                    break;
                }
            }
        }
        v.push_back(-1);
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends