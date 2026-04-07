class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";

        for (string s : strs) {
            res += to_string(s.length()) + "#" + s;
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;

        while (i < s.length()) {
            int j = i;

            // find '#'
            while (s[j] != '#') j++;

            int len = stoi(s.substr(i, j - i));

            j++; // move past '#'

            string word = s.substr(j, len);
            res.push_back(word);

            i = j + len; // move to next string
        }

        return res;
    }
};