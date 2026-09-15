class Solution {
  
    
  public:
    //recursive function
    void helper(string &s, int index, string &current, vector<string> &result ){
        //base case
        if(index==s.size()){
            result.push_back(current);
            return;
        }
        //not-take
        helper(s,index+1,current,result);
        
        //take
        current.push_back(s[index]);
        helper(s,index+1,current,result);
        current.pop_back();
        
    }
    vector<string> powerSet(string s) {
        //store resulting string
        vector<string> result;
        //store current subsequence
        string current="";
        helper(s,0,current,result);
        return result;
        
        
    }
};
