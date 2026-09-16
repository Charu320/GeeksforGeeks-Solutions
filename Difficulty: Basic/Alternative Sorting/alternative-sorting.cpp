class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        vector<int> ans;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            if(i%2==0){
                ans.push_back(arr[n-1-i/2]);
            }
            else{
                ans.push_back(arr[i/2]);
            }
            
        }
        return ans;
    }
};
