class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int result=0;
        int satisfySum=0;
        ranges::sort(satisfaction, greater<>());
        for(const int i: satisfaction){
            satisfySum+=i;
            if(satisfySum<=0)
            return result;
            result+=satisfySum;
        }
    return result;
    }

};