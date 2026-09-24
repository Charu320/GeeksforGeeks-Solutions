class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        //moore's voting algorithm
        int cnt=0;
        int el=-1;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                el=arr[i];
                
            }
            else if(arr[i]==el){
                cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            cnt1++;
        }
    }
        if(cnt1>(n/2)){
            return el;
        }
             return -1;
   
    }
    
    
};