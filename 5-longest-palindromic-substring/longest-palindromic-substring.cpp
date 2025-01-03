class Solution {
public:
    string longestPalindrome(string s) {
        int start =0;
        int end =0;
        int len;
        for (int i =0;i<s.length();i++){
            int first = centerOfString(s,i,i);
            int second = centerOfString(s,i,i+1);
            len= max(first,second);
            if(len>end-start){
                start = i-(len-1)/2;
                end = i+len/2;
            }
        }
        return s.substr(start,end-start+1);
    }
    int centerOfString(string s, int start, int end) {
        while (start >= 0 && end < s.length() && s[start] == s[end]) {
            start--;
            end++;
        }
        return end - start -1;
    }
};