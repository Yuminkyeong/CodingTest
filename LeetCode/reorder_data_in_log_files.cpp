#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<vector<string>> letters;
        vector<string> digits;
        for (string& log : logs) {
            if (isdigit(log[log.length() - 1])) {
                digits.push_back(log);
            } else {
                auto content = log.substr(log.find(' ') + 1);
                auto identifier = log.substr(0, log.find(' '));
                letters.push_back({content, identifier});
            }
        }
        sort(letters.begin(), letters.end());
        vector<string> result;
        for (auto& letter : letters) {
            result.push_back(letter[1] + ' ' + letter[0]);
        }
        for (string& digit : digits) {
            result.push_back(digit);
        }
        return result;
    }
};

int main(){
    Solution ans = Solution();
    vector<string> a = {"dig1 8 1 5 1","let1 art can","dig2 3 6","let2 own kit dig","let3 art zero"};
    for(auto v: ans.reorderLogFiles(a)){
    cout << v;
    }
    
}