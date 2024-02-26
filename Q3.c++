class Solution {  
public:
    int subArray(vector<int>& nums, int k) {
        int n = nums.size();
        int count=0;
        int ans=0;
        int j = 0,i=0;
        while(j<n){
            if(nums[j] %2 == 1){count++;}
            while(count > k){
                if(nums[i] %2 == 1){
                    count--;
                }
                i++;
            }
       ans += j-i+1;   
        j++;
        }
        return ans;    
    }

    int numberOfSubarrays(vector<int>& nums, int k) {     
        return subArray(nums, k) - subArray(nums, k - 1);
    }
};