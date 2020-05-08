// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //we've to return the lower bound of bad versions
        
        int low = 1, high = n, mid;
        int answer;
        
        while(low <= high){
            mid = low + (high-low)/2;
            
            if(isBadVersion(mid)){
                answer = mid;
                
                if(mid>1 && !isBadVersion(mid-1)){
                    break;
                }
                high = mid-1;
            }
            else if(!isBadVersion(mid)){
                low = mid+1;
            }
        }
        
        return answer;
    }
};
