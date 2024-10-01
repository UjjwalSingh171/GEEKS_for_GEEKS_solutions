//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
public:
    int lenOfLongSubarr(int A[], int N, int K) {
        std::unordered_map<int, int> prefixSumMap;
        
        int prefixSum = 0;
        int maxLength = 0;
        
        for (int i = 0; i < N; i++) {
            prefixSum += A[i];
            
            if (prefixSum == K) {
                maxLength = i + 1;
            }
            
            if (prefixSumMap.find(prefixSum - K) != prefixSumMap.end()) {
                maxLength = std::max(maxLength, i - prefixSumMap[prefixSum - K]);
            }
            
            if (prefixSumMap.find(prefixSum) == prefixSumMap.end()) {
                prefixSumMap[prefixSum] = i;
            }
        }
        
        return maxLength;
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