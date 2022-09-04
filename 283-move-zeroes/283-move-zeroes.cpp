class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> res(nums.size());
        int k = 0 ;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]!=0){
                res[k]=nums[i];
                k++;
            }
        }
        while(k<nums.size()){
         res[k]=0;
        k++;
        }
        for(int i = 0 ; i < nums.size();i++){
            nums[i]=res[i];
        }
    }
};