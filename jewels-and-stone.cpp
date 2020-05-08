class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char, bool> isJewel;
        for(auto &x: J){
            isJewel[x] = true;
        }
        int count = 0;
        
        for(auto &x: S){
            count+= isJewel[x];    
        }
        
        return count;
    }
};
