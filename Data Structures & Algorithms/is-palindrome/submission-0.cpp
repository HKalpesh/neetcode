class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;
        for(char c:s){
            if(isalnum(c)){
                cleaned+=tolower(c);
            }
        }
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        string rev=string(cleaned.rbegin(),cleaned.rend());
        return cleaned==rev;
    }
};
