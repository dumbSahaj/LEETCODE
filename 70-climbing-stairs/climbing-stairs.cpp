class Solution {
public:
    int climbStairs(int n) {
        double rootfive = sqrt(5);
        int nth = (pow((1+rootfive)/2,n+1)-pow((1-rootfive)/2,n+1))/rootfive;
        return nth;
    }
};