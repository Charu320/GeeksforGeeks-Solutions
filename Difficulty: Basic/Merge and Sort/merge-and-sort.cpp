class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        //  code here
        int n=arr1.size();
        int m=arr2.size();
        set<int> st; //using set to store unique elements only
        for(int i=0;i<n;i++){
            st.insert(arr1[i]);
        }
        for(int j=0;j<m;j++){
            st.insert(arr2[j]);
        }
       vector<int> ans(st.begin(),st.end());
       return ans;
        
    
    }
};