class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       
        int count = 0;
        int maxlen = 0 ;
        unordered_set<int> set;
        for(auto x : nums){
            set.insert(x);
        }
        for(int i = 0 ; i < nums.size(); i++){
        if(set.find(nums[i]-1)==set.end()){
            int count = 1;
        while(set.find(nums[i]+count)!=set.end()){
            count+=1;
        }
            maxlen = max(maxlen,count);
        }
        }
        return maxlen;
    }
};

//Brute Approach : Solution 1
//
// int longestConsecutive(vector<int>& nums) {
        
//         int len = 0;
//         int maximum = 0 ; 
//         sort(nums.begin(),nums.end());
//         for(int i = 1; i < nums.size(); i++){
            
//             if(nums[i]-nums[i-1]==1){
//                 len+=1;
//                 maximum = max(len,maximum);
//             }
//             else if(nums[i]-nums[i-1]==0)
//                 continue;
//             else 
//                 len = 0;  
//         }
//       return maximum+1;     
//     }

//Brute Approach Solution (not correct)
// int longestConsecutive(vector<int>& nums) {
        
//         int len = 0; 
//         int maximum = 0 ; 
//         for(int i = 0 ; i < nums.size(); i++){
//             for(int j = 0 ; j <nums.size(); j++){
//                 if(nums[i]-nums[j]==1){
//                     len+=1;
//                 }
//             }
//         }
//         return len+1;
//     }


//////Optimal Approach////////////


// int longestConsecutive(vector<int>& nums) {
       
//         int count = 0;
//         unordered_set<int> set;
//         for(auto x : nums){
//             set.insert(x);
//         }
//         for(int i = 0 ; i < nums.size(); i++){
//         if(set.find(nums[i]-1)==set.end())
//             int count = 1;
//         while(set.find(nums[i]+count)!=set.end()){
//             count+=1;
//         }
//         }
//         return count;
//     }