class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long sum = 0;
        long long count=0;
        int i = 0, j= 0;
        while(j<nums.size()){
            sum += nums[j];
            while(sum*(j-i+1) >= k){
                sum -= nums[i++];
                count += j-i+1;}
        j++;    
        }
        return count;
    }
};