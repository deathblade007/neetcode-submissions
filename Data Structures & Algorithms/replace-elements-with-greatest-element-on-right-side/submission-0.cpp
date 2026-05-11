class Solution {
public:
    vector<int> maxelement(vector<int>& arr,int pos){
        vector<int> ans;
        int max = 0;
        int cr =0;
        for(int i = pos;i<arr.size();i++){
            cr = arr[i];
            if(cr > max){
                max = cr;
                pos = i;
            }
        }
        ans.push_back(max);
        ans.push_back(pos);
        return ans;
    }
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            ans = maxelement(arr,i+1);
            for(int j=i;j<ans[1];j++){
                arr[j] = ans[0];
            }
            if(i == arr.size()-1){
                arr[i] = -1;
            }
        }
        return arr;
    }
};