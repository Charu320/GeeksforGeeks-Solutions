class Solution {
  public:
    int maxPerimeter(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        for(int i = arr.size() - 1; i >= 2; i--) {

            if(arr[i-1] + arr[i-2] > arr[i]) {
                return arr[i] + arr[i-1] + arr[i-2];
            }
           
        }

        return -1;
    }
};
