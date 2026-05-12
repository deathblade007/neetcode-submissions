class Solution {
public:
    bool isValid(string s) {
        vector<char> ans = {0};
        for(int i =0 ;i<s.length();i++){
                if(s[i] == ')'){
                    if(ans.back() == '('){
                        ans.pop_back();
                        continue;
                    }
                    else{
                        return false;
                    }
                }
                if(s[i] == ']'){
                    if(ans.back() == '['){
                        ans.pop_back();
                        continue;
                    }
                    else{
                        return false;
                    }
                }
                if(s[i] == '}'){
                    if(ans.back() == '{'){
                        ans.pop_back();
                        continue;
                    }
                    else{
                        return false;
                    }
                }
                if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                    ans.push_back(s[i]);
                }
            }
        if(ans.size() == 1){
            return true;
        }
        else{
            return false;
        }
    }
};
