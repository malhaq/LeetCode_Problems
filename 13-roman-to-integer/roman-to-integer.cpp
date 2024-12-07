class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        int n = s.length();
        for(int i = 0;i<n;i++){
            int current = 0 ;
            char romanChar = s[i];
            switch (romanChar){
                case 'I':
                current = 1;
                break;
                case 'V':
                current = 5;
                break;
                case 'X':
                current = 10;
                break;
                case 'L':
                current = 50;
                break;
                case 'C':
                current = 100;
                break;
                case 'D':
                current = 500;
                break;
                case 'M':
                current = 1000;
                break;
            }

            if(i+1<n){
                int next = 0;
                char nextRoman = s[i+1];
                switch (nextRoman){
                    case 'I':
                    next = 1;
                    break;
                    case 'V':
                    next = 5;
                    break;
                    case 'X':
                    next = 10;
                    break;
                    case 'L':
                    next = 50;
                    break;
                    case 'C':
                    next = 100;
                    break;
                    case 'D':
                    next = 500;
                    break;
                    case 'M':
                    next = 1000;
                    break;
                }
                if(current<next){
                    total -= current;
                } else {
                    total += current;
                }
            } else {
                total += current;
            }
        } 
        return total;
    }
};