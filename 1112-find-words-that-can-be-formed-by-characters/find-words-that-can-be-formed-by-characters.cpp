class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int len = chars.length();
        int count =0;
        vector<int> alphabet(26,0);
        for(char c:chars){
            alphabet[c - 'a']++;
        }
        for(string word:words){
            if(goodWord(word,alphabet)){
                count +=word.length();
            }
        }
        return count;
    }
    bool goodWord(string word,vector<int>alphabet){
        vector<int>alphabetCount(26,0);
        for(char letter:word){
            alphabetCount[letter-'a']++;
            if(alphabet[letter-'a']<alphabetCount[letter-'a']){
                return false;
            }
        }
        return true;
    }
};