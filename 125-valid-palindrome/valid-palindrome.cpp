class Solution {
public:
bool isPalindrome(string s) {
string result = "";
for (int i = 0; i < s.length(); i++) {
if (isalnum(s[i])) {
result += tolower(s[i]);
}
}

int rightPtr = result.length() -1;
int leftPtr = 0;

while(rightPtr > leftPtr){
if((result[leftPtr] != result[rightPtr]) )
return false;

leftPtr++;
rightPtr--;
}



return true;
}
};