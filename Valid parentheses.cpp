class Solution {
public:
    bool isValid(string s) {
        vector<char> visit; 
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                visit.push_back(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if(visit.empty()) {
                    return false; 
                }
                char last = visit.back();
                visit.pop_back();
                if((s[i] == ')' && last != '(') || (s[i] == '}' && last != '{') || (s[i] == ']' && last != '[')) {
                    return false; 
                }
            }
        }

        return visit.empty(); 
    }
};
