class Solution {
public:
    bool isPalindrome(string s) {
    int i=0,length=s.length()-1;
    for(i=0;i<length;i++){
       while(i<length && !isalnum(s[i]))
       i++;
       while(i<length && !isalnum(s[length]))
       length--;
        if (tolower(s[i]) != tolower(s[length]))
        return false;
      --length;
    }

    return true;
    }
};
