class Solution {
public:
    stack <char> brackets;
    bool isValid(string s) {
        int n = s.length();
        char current ;
        for(int i=0;i<n;i++){
            current = s[i];
            if(current == '('||current =='{'||current =='['){
                brackets.push(current);
            }
            else{
                if(brackets.empty()){
                    return false;
                }
                switch (current){
                    case ')':
                    if(brackets.top() != '('){
                        return false;
                    } else {
                        brackets.pop();
                    }
                    break;
                    case '}':
                    if(brackets.top() != '{'){
                        return false;
                    } else {
                        brackets.pop();
                    }
                    break;
                    case ']':
                    if(brackets.top() != '['){
                        return false;
                    } else {
                        brackets.pop();
                    }
                    break;
                }
            }
        }
        return brackets.empty();
        
    }
};