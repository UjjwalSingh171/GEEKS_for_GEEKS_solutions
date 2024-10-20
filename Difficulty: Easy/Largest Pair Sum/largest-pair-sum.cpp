//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        int n = arr.size();
        if (n < 2) 
        {
            return -1; 
        }
        int m = INT_MIN;
        int sm = INT_MIN;
        for(int i = 0 ; i< n ; i++)
        {
            if(arr[i]>m)
            {
                sm = m ;
                m = arr[i];
            }
            else if( (arr[i]>sm) and (arr[i]<m))
            {
                sm = arr[i];
            }
        }
        return m+sm ;
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
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int r = ob.pairsum(arr);
        cout << r << endl;
    }
    return 0;
}
// } Driver Code Ends