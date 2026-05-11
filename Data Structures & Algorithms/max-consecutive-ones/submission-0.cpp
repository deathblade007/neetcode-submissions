class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int max = 0;
    int cr = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 1){
            cr += 1;
            if(cr > max){
                max = cr;
            }
        }
        else{
            cr = 0;
        }
    }
    return max;
    }
};