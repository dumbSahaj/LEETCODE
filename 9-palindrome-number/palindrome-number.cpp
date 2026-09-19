class Solution {
public:
    bool isPalindrome(int x) {
        long b = 0;
        int c = x;
        while (x>0){
            b = b*10 + x%10;
            x = x/10;
        }
        if (b == c){
            return true;
        }
        else {
            return false;
        }
    }
};