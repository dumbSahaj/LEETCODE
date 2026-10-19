class Solution {
public:
    int reverse(int x) {
        long long b = 0;

        while (x != 0) {
            int a = x % 10;
            x /= 10;
            b = b * 10 + a;
        }

        if (b < INT_MIN || b > INT_MAX) {
            return 0;
        }

        return (int)b;
    }
};