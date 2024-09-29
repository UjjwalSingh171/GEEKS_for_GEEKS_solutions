//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int> unionSet;  // A set to store unique elements

        // Insert all elements of arr1 into the set
        for (int i = 0; i < n; i++) {
            unionSet.insert(arr1[i]);
        }

        // Insert all elements of arr2 into the set
        for (int i = 0; i < m; i++) {
            unionSet.insert(arr2[i]);
        }

        // Convert set to vector and return
        vector<int> result(unionSet.begin(), unionSet.end());
        return result;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends