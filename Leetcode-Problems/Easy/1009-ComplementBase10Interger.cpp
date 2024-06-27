class Solution {
public:
    int bitwiseComplement(int n) {
        int flag=n;
        int mask=0;
        if(n==0)
        return 1;
        while(n>0)
        {
            mask=(mask<<1)| 1;
            n=n>>1;
        }
        int res=(~flag)&mask;
        return res;
    }
};