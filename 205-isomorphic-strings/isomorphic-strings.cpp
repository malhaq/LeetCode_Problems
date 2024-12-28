class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int lent = t.length();
        int lens = s.length();
        if(lens!=lent){
            return false;
        }
         //the size of the vector is 128 because there are 127 available ascii characters with the max ascii value of 127
        vector<int> tv (128,-1);
        vector<int> sv (128,-1);
        for (int i =0;i<lent;i++){
            if(sv[s[i]]!=tv[t[i]]){
                return false;
            }
            tv[t[i]] = i;
            sv[s[i]] = i;
        } 
        return true;
        
    }
};