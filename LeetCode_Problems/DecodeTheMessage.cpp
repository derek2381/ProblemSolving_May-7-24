// problem link
// https://leetcode.com/problems/decode-the-message/description/

class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, char> mp;

        char c = 'a';
        int count = 0;
        string res = "";

        for(char i : key){
            if(i == ' '){
                mp[i] = char(i);
            }else if(i != ' ' && mp.find(i) == mp.end()){
                mp[i] = char(c);
                c++;
            }
        }

        cout << mp.size() << endl;

        for(auto i : mp){
            cout << i.first << " " << i.second << endl;
        }

        // cout << mp[' '] << endl;

        for(char i : message){
            if(i == ' '){
                res += ' ';
            }else{
                res += mp[i];
            }
        }


        return res;

    }
};
