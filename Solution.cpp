class Solution {
public:
    string interpret(string command) {
        string ans = "", temp = "";
        int paren = 0;
        for (char& c : command) {
            if (isalpha(c)) {
                ans += c;
                if (paren > 0) {
                    temp += c;
                }
            } else {
                if (c == '(') {
                    paren++;
                } else {
                    paren--;
                    if (paren == 0 && temp == "") {
                        ans += 'o';
                    }
                    temp = "";
                }
            }
        }
        return ans;
    }
};
