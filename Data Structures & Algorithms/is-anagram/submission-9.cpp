class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i = 0;i<s.length();i++){
            mp1[s[i]]++;
        }
        for(int i = 0;i<t.length();i++){
            mp2[t[i]]++;
        }
        if(mp1.size() == mp2.size()){
            for(auto &[key , value] : mp1){
                auto it = mp2.find(key);
                if(it == mp2.end()) return false;
                if(value != it->second) return false;
            }
            for(auto &[key , value] : mp2){
                auto it = mp1.find(key);
                if(it == mp1.end()) return false;
                if(value != it->second) return false;
            }
            return true;
        }
        else return false;
    }
};
