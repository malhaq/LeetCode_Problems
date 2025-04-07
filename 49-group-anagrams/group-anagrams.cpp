class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> khalaf;
        vector<vector<string>> subhi;
        for (string s : strs) {
            string fathi = s;
            sort(fathi.begin(), fathi.end());
            khalaf[fathi].push_back(s);
        }
        for (auto i = khalaf.begin(); i != khalaf.end(); i++) {
            subhi.push_back(i->second);
        }
        return subhi;
    }
};