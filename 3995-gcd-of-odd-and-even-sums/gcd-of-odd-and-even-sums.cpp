class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd,sumEven;
        int gcd = 1;
        for (int i = 0; i < n ; i++){
            sumOdd += (2*i+1);
            sumEven += (2*i+2);
        }
        for (int i = 1; i <= min(sumOdd,sumEven); i++){
            if ( (sumOdd % i) == 0 && (sumEven % i ) == 0){
                gcd = i;
            }
        }
        return gcd;
    }
};