class Solution {
  public:
  
  void findPermutation(string &s, int index, vector<string> &ans){
      if(index==s.size()){
          ans.push_back(s);
          return;
      }
      for(int i=index;i<s.size();i++){
          swap(s[i],s[index]);
          
         findPermutation(s,index+1,ans);
         swap(s[i],s[index]);
      }
  }
    vector<string> permutation(string s) {
        vector<string> ans;
        findPermutation(s,0,ans);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};