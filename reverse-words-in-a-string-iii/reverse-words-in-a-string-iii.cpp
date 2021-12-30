class Solution {
public:
    vector<string> splitString(string s, vector<string> &v){
    string temp = "";
    s += " ";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            v.push_back(temp);
            temp = "";
        } else {
            temp.push_back(s[i]);
        }
    }
    return v;
}
    
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        vector<string> v;
        splitString(s, v);
        string temp = "";
        for(int i = 0; i < v.size()/2; i++){
            temp = v[i];
            v[i] = v[v.size()-i-1];
            v[v.size()-i-1] = temp;
        }
        s = "";
        for(auto i: v){
            s += i + " ";
        }
        s.pop_back();
        return s;
    }
};