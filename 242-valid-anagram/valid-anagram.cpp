class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26]={0};
        for(char x:s){
            count[x-'a']++;
        }
        for(char x:t){
            count[x-'a']--;
        }
        for(int i :count){
            if(i!=0){return false;}
        }
        return true;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.length()!=t.length()){return false;}
        return s==t;
    }
};