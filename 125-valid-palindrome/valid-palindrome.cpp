class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0, en = (int)s.size() - 1;
        auto isAlNum = [](char c) {
            return std::isalnum(static_cast<unsigned char>(c));
        };

        while (st < en) {
            while (st < en && !isAlNum(s[st])) ++st;
            while (st < en && !isAlNum(s[en])) --en;

            if (st >= en) break;

            char a = std::tolower(static_cast<unsigned char>(s[st]));
            char b = std::tolower(static_cast<unsigned char>(s[en]));
            if (a != b) return false;

            ++st;
            --en;
        }
        return true;
    }
};