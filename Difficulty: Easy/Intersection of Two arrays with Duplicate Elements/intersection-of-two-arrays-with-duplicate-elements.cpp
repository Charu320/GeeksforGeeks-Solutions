class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // code here
    unordered_set<int> st;
         vector<int> ans;

         for (int x : a) {
             st.insert(x);
         }

         for (int x : b) {
             if (st.find(x) != st.end()) {
                 ans.push_back(x);
                 st.erase(x);   // prevents duplicate
             }
         }

         return ans;
    }
};