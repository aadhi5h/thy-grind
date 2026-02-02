#include<iostream>
#include<vector>

using namespace std;

vector<int> RunningSum(vector<int> &nums){

    int sum = nums[0];
    for(int i = 1; i < nums.size(); i++){
        sum+=nums[i];
        nums[i] = sum;
    }

    return nums;
}