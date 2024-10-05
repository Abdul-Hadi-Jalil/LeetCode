class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        int start = 0, end = size - 1;

        while (start < end) {
            // Move start forward if it's not an alphanumeric character
            if (!isalnum(s[start])) {
                start++;
                continue;
            }

            // Move end backward if it's not an alphanumeric character
            if (!isalnum(s[end])) {
                end--;
                continue;
            }

            // Convert both characters to lowercase and compare
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }

            // Move both pointers towards the center
            start++;
            end--;
        }
        return true;
    }
};
