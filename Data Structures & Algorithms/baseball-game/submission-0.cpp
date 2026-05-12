class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int i = 0;
        for(auto x : operations){
            if(x == "+"){
                ans.push_back(ans[i-1] + ans[i-2]);
                i++;
            }
            else if(x == "D"){
                ans.push_back(2*ans[i-1]);
                i++;
            }
            else if(x == "C"){
                ans.pop_back();
                i--;
            }
            else{
                int num = stoi(x);
                ans.push_back(num);
                i++;
            }
        }
        int sum = 0;
        for(auto x : ans){
            sum += x;
        }
        return sum;
    }
};