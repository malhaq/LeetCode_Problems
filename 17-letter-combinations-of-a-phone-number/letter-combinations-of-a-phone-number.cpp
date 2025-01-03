class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>solution;
        if(digits.length()==0){
            return solution;
        }
        int i =0;
        string combination;
        fill(digits,combination,i,solution);
        return solution;
    }

    void fill(string digits,string combination,int index, vector<string>&solution){
        string map[10] = {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if(index>=digits.length()){
            solution.push_back(combination);
            return;
        }

        int i = digits[index]-'0';
        string dValue = map[i];

        for (int j =0;j<dValue.length();j++){
            combination.push_back(dValue[j]);
            fill(digits,combination,index+1,solution);
            combination.pop_back();
        }

    }
};