class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //if the size of the array is 0 or there is no rotation
       if(nums.size()==0||k==0)
           return;
        vector<int> res(nums.size());
        //make copy of nums
        for(int i = 0 ; i < nums.size();i++){
            res[i]=nums[i];
        }
        //rotate the elements
        for(int i = 0 ; i < nums.size(); i++){
            nums[(i+k)%nums.size()]=res[i];
        }
    }
};