class Solution {
public:
    int findComplement(int num) {
        unsigned mask = ~10;    
        bitset<32> b(mask);
        cout << b << endl << endl;

        bitset<32> bs(num);
        //cout << bs;
        int numBits = num==0 ? 1 : logb(num) + 1;
        for(int i=0; i<numBits; i++){
            bs.flip(i);
        }
        int answer = bs.to_ulong();
        return answer;
    }
};

