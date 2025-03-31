// Last updated: 4/1/2025, 12:29:16 AM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>> ans;
         unordered_map<string,vector<string>> m;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(strs[i]);
        }
        for(auto &i:m){
            ans.push_back(i.second);
        }
     
         return ans;
    }
};