class Solution {
  public:
    vector<int> pattern(int n) {
        if(n<=0) return {n};
        vector<int> ans;
        ans=pattern(n-5);
        ans.insert(ans.begin(),n);
        ans.push_back(n);
        return ans;
        
    }
};