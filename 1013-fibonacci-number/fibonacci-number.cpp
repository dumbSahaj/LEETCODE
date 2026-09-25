class Solution {
public:
    int fib(int n) {
        double rootfive = sqrt(5);
        int nth = (pow((1+rootfive)/2,n)-pow((1-rootfive)/2,n))/rootfive;
        return nth;
    }
};