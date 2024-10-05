class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq_map;
        if(s.length() != t.length()){
            return false;
        }
        for(char ch : s ){
            freq_map[ch]++;
        }

        try{
            for(char ch: t){
                freq_map.at(ch)--;
                if(freq_map[ch] == 0){
                    freq_map.erase(ch);
                }
            }
        }
        catch(const out_of_range&e){
            return false;
        }
        return true;
    }
};