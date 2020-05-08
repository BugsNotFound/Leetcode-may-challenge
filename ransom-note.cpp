class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> magazineCharacters;
        
        for(auto &x: magazine){
            magazineCharacters[x]++;
        }
        
        for(auto &x: ransomNote){
            if(--magazineCharacters[x] < 0){
                return false;
            }
        }
        
        return true;
    }
};
