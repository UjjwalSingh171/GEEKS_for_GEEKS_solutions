//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <vector>

class Solution {
  public:
    long long mergeAndCount(std::vector<long long>& arr, std::vector<long long>& temp, int left, int mid, int right) {
        int i = left;
        int j = mid + 1;
        int k = left;
        long long inv_count = 0;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                inv_count += (mid - i + 1);
            }
        }

        while (i <= mid) {
            temp[k++] = arr[i++];
        }

        while (j <= right) {
            temp[k++] = arr[j++];
        }

        for (i = left; i <= right; i++) {
            arr[i] = temp[i];
        }

        return inv_count;
    }

    long long mergeSortAndCount(std::vector<long long>& arr, std::vector<long long>& temp, int left, int right) {
        long long inv_count = 0;
        if (left < right) {
            int mid = (left + right) / 2;
            inv_count += mergeSortAndCount(arr, temp, left, mid);
            inv_count += mergeSortAndCount(arr, temp, mid + 1, right);
            inv_count += mergeAndCount(arr, temp, left, mid, right);
        }
        return inv_count;
    }

    long long int inversionCount(std::vector<long long> &arr) {
        int n = arr.size();
        std::vector<long long> temp(n);
        return mergeSortAndCount(arr, temp, 0, n - 1);
    }
};


//{ Driver Code Starts.

int main() {

    long long T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<long long> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        long long num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
    }

    return 0;
}

// } Driver Code Ends