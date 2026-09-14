class Solution {
  public:
    vector<int> fibonacciNumbers(int n) {
        if(n==0) 
        return {};
        if(n==1) return {0};
        vector<int> ans = fibonacciNumbers(n - 1);
        if (ans.size() == 1) {
          ans.push_back(1);
        }
        else{
            int n = ans.size();
            ans.push_back(ans[n - 1] + ans[n - 2]);
        }
        return ans;
    }
};