class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        for(int i=1;i<=32;i++){
            if(1&n)
            count++;
            n=n>>1;
        }
     return count;   
    }
};
