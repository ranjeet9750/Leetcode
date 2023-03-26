class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int even = 0, odd = 1;
        while(even < A.size() && odd < A.size())
        {
            if(A[even] % 2 && !(A[odd] % 2))
            {
               int tmp = A[even];
               A[even] = A[odd];
               A[odd] = tmp;
            }    
            
            if(!(A[even] % 2)) even += 2;
            if(A[odd] % 2) odd += 2;
        }
        return A;
    }
};