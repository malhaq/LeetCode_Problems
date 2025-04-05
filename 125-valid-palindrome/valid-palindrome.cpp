class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            if(!isalpha(s[i])&&!isdigit(s[i]) || s[i]== ' '){
                i++;
                continue;
            }
            
            if(!isalpha(s[j]) && !isdigit(s[j]) || s[j]== ' '){
                j--;
                continue;
            }

            if(tolower(s[i]) != tolower(s[j])){
                cout<<tolower(s[i]);
                cout<<"\n";
                cout<<tolower(s[j]);

                return false;
            } 
            i++;
            j--;


        }
        return true;

        // string result;
        // stack<char> characters;
        // for(char c:s){
        //     if((isalpha(c)||isdigit(c))&&c!=' '){
        //         char lower = tolower(c);
        //         result=result+lower;
                

        //     }
        // }
        // int i = 0;
        // int j = result.length()-1;
        // if (j <1) return true;
        // while(i<=j){
            
        //     if( result[i] != result[j]) return false;
        //     i++;
        //     j--;
        // }
        
        // return true;
        
    }
};