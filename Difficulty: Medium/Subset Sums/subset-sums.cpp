class Solution {
  public:
   void solve(int index, int sum, vector<int> &arr, int n, vector<int> &subset){
     //base case
    
       if(index==n){
           subset.push_back(sum);
           return;  //backtrack
       }
       //pick
       solve(index+1, sum+arr[index],arr, n, subset);
       //not pick
       solve(index+1, sum,arr, n, subset);
   }

    vector<int> subsetSums(vector<int>& arr) {
        int n=arr.size();
        vector<int> subset;
       solve(0,0,arr,n,subset);
        sort(subset.begin(),subset.end());
        return subset;
        
        
    
        
    }
};