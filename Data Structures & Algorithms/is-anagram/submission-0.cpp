class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> map;
        for(char i:s){
            map[i]++;
        }
        for(char i:t){
            map[i]--;
        }

        for(auto i:map){
            if(i.second > 0 || i.second < 0){
                return false;
            }
        }
        return true;
    }
};
