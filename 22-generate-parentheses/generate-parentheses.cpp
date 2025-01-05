class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> output;
        fillVector(output, "", n, 0, 0);
        return output;
    }
    void fillVector(vector<string>& output, string sofar, int n, int open,
                    int close) {
        if (open == n && close == n) {
            output.push_back(sofar);
            return;
        }
        if (close < open) {
            fillVector(output, sofar + ")", n, open, close + 1);
        }
        if (open < n) {
            fillVector(output, sofar + "(", n, open + 1, close);
        }
    }
};