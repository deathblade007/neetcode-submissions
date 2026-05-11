class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        int cr = 0;
        for(int x : nums){
            if(x == val){
                cr += 1;
                continue;
            }
            ans.push_back(x);
        }
        for(int i = 0; i < ans.size(); i++){
            nums[i] = ans[i];
        }
        return ans.size();
    }
};