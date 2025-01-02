class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int len = chars.length();
        int count =0;
        vector<int> alphabet(26,0);
        for(int i =0; i<len;i++){
            alphabet[chars[i] - 'a']++;
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
            int charindex = letter-'a';
            alphabetCount[charindex]++;
            if(alphabet[charindex]<alphabetCount[charindex]){
                return false;
            }
        }
        return true;
    }
};