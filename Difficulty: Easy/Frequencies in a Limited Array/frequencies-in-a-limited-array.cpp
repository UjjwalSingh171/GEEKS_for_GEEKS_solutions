class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        int n = arr.size();
        vector<int> freq(n, 0); // initialize result array with zeros
        
        for (int i = 0; i < n; i++) {
            int val = arr[i];
            // Count only if the value is within 1 to n
            if (val >= 1 && val <= n) {
                freq[val - 1]++;
            }
        }

        return freq;
    }
};