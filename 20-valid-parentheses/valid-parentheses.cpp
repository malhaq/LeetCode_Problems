class Solution {
public:
    bool isValid(string s) {
        stack<char> subhi;
        for(char c : s){
            if(c == '[' || c == '(' || c == '{'){
                subhi.push(c);
                continue;
            }else {
                if(subhi.empty()) return false;
                switch (c){
                    case ']':
                        if(subhi.top() != '[') {
                            return false;
                        }else{
                            subhi.pop();
                        }
                        break;
                    case '}':
                        if(subhi.top() != '{') {
                            return false;
                        }else{
                            subhi.pop();
                        }
                        break;
                    case ')':
                        if(subhi.top() != '(') {
                            return false;
                        }else{
                            subhi.pop();
                        }
                        break;
                }
            }
        }
        return subhi.empty();
    }
};