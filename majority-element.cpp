class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //without extra space...
        int assumedCandidate = nums[0];
        int itsCount = 0;
        
        for(int i=0; i<(int)nums.size(); i++){
            if(itsCount == 0){
                assumedCandidate = nums[i];
                itsCount++;
                continue;
            }
            if(nums[i]==assumedCandidate){
                itsCount++;
            }else{
                itsCount--;
            }
        }
        
        if(itsCount == 0){
            //no majority element;
        }else{
            int c = 0;
            for(auto &x: nums){
                if(x==assumedCandidate){
                    c++;
                }
            }
            
            if(c > (int)nums.size()/2){
                return assumedCandidate;
            }else{
                //no majority element found;
            }
        }
        
        return -1;
    }
};
