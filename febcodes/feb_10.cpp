class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int largest = 0, i = 0, count = 0;
        while (i < nums.size()){
            if (nums[i] == 1) count++;
            else count = 0;
            if (largest < count) largest = count;
            i++;
        }
        return largest;
        
    }
};