class Solution {1343
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int sum = 0,count = 0;

        for(int i=0;i<k;i++){sum += arr[i];}
        if(sum/k>=threshold){count++;}
        
        int i = 1, j = k;
        while(j<n){
            sum = sum + arr[j]-arr[i-1];
            if(sum/k >= threshold){count++;}
            i++,j++;
        }
        return count;
    }
};