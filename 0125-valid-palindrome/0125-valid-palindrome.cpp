class Solution {
public:
    bool isPalindrome(string s) {

        int start = 0;
        int end = s.length() - 1;

        while(start < end) {

            // Skip non-alphanumeric characters from left
            if(!isalnum(s[start])) {
                start++;
                continue;
            }

            // Skip non-alphanumeric characters from right
            if(!isalnum(s[end])) {
                end--;
                continue;
            }

            // Compare characters ignoring case
            if(tolower(s[start]) != tolower(s[end])) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};