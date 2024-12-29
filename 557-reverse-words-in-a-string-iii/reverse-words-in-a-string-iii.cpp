class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int len = s.length();
        for (int i =0;i<len;i++){
            if(s[i] == ' '){
                invertString(s,start,i-1);
                start = i+1;
            }
            if (i==len-1){
                invertString(s,start,i);
            }
        }
        return s;
    }
    void invertString(string& s, int start, int end) {
        vector<char> v;
        v = vector<char>(s.begin() + start, s.begin() + end+1);
        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            s[start+i] = v[i];
        }
        return;
    }
};