int normalMax(vector<int> &nums, int n){
    int largest = nums[0];
    int largest_sum = nums[0];
    for(int i = 1 ; i < n; i++){
        largest_sum = max(nums[i],largest_sum+nums[i]);
        largest = max(largest,largest_sum);
    }
    return largest;
}
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int max_normal = normalMax(nums,n);
        if(max_normal<0)
            return max_normal;
        int arr_sum = 0 ;
        for(int i = 0 ; i < nums.size(); i++){
            arr_sum+=nums[i];
            nums[i]=-nums[i];
        }
        int max_circular = arr_sum+normalMax(nums,n);
        
        return max(max_normal,max_circular);
            
    }
};
// Naive Solution O(n^2)
//  basically we are finding the all subarrays and calculating the subarray   sum and returning the max subarray
// // class Solution {
// public:
//     int maxSubarraySumCircular(vector<int>& nums) {
//         int res = nums[0];
//         for(int i = 0 ; i < nums.size(); i++){
//            int  curr_max = nums[i];
//            int  curr_sum = nums[i];
//             for(int j = 1 ; j < nums.size(); j++){
//                 int index = (i+j)%nums.size();
//                 curr_sum+=nums[index];
//                 curr_max=max(curr_max,curr_sum);
//             }
//         res = max(res,curr_max);
//         }
        
//         return res;
//     }
// };