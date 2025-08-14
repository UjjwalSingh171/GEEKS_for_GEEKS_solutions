class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i = 1 ; i<n ; i++){
            int j = i ;
            int temp = arr[i];
            while(j>0 and arr[j-1]>temp){
                    arr[j] = arr[j-1];
                    j--;
            }
            arr[j]=temp;
        }
    }
};