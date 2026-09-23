class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd,sumEven;
        int gcd = 1;
        for (int i = 0; i < n ; i++){
            sumOdd += (2*i+1);
            sumEven += (2*i+2);
        }
        
        return gcds(max(sumEven,sumOdd),min(sumEven,sumOdd));
    }
    int gcds(int n1,int n2){
        if (n2 == 0) {
            return n1;
        }
        
        return gcds(n2, n1 % n2);
        
    }
};