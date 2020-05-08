class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        vector<int> c1 = coordinates[0];
        vector<int> c2 = coordinates[1];
        
        
        if(c1[0] == c2[0]){
            for(auto &x: coordinates){
                if(x[0] != c1[0]){
                    return false;
                }
            }
            return true;
        }
        else if(c1[1] == c2[1]){
            for(auto &x: coordinates){
                if(x[1] != c1[1]){
                    return false;
                }
            }
            return true;
        }
        else{
            
            float slope = (c2[1]-c1[1])/float(c2[0]-c1[0]);
            
            for(int i=2; i<coordinates.size(); i++){
                if(coordinates[i][0] - c1[0] == 0)  return false;
                if((coordinates[i][1]-c1[1]) / float(coordinates[i][0] - c1[0])  != slope){
                    return false;
                }
            }
            
            return true;
            
        }
    }
};
