class Solution {
public:
    string lexSmallest(string s) {
        int n = s.length();
        string small = s;
        for(int k = 1; k<=n; k++){
            string a = s;
            reverse(a.begin(), a.begin() + k);
            string b = s;
            reverse(b.end() - k, b.end());
            small = min({small, a, b});
        }
        return small;
    }
};
