class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int current = 0 ;
        int largest = INT_MIN;
        
        for(int i = 0 ; i < nums.size(); i++){
            current=current+nums[i];
            largest = max(current,largest);
            
            if(current<0)
                current = 0;
        }
      return largest;  
    }
};