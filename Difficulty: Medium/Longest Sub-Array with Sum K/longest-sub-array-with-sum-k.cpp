//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
       std::unordered_map<int, int> sumMap;
        int curr_sum = 0;
        int max_len = 0;

        for (int i = 0; i < N; i++) {
            curr_sum += A[i];

            if (curr_sum == K) {
                max_len = i + 1;
            }

            if (sumMap.find(curr_sum - K) != sumMap.end()) {
                max_len = std::max(max_len, i - sumMap[curr_sum - K]);
            }

            if (sumMap.find(curr_sum) == sumMap.end()) {
                sumMap[curr_sum] = i;
            }
        }

        return max_len;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends