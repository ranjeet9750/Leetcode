class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum = 0; 
        int sum = 0 ;
        for(int i = 0 ; i < nums.size(); i++){
            sum+=nums[i];
            if(nums[i]==0)
                sum = 0;
            else
                maximum = max(sum,maximum);
        }
        return maximum;
        
    }
};