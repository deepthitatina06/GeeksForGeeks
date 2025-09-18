class Solution {
  public:
    int reverseDigits(int n) {
        int revDigits = 0;
        while (n > 0) {
            int ld = n % 10;                 // last digit
            revDigits = (revDigits * 10) + ld; // append digit
            n = n / 10;                      // remove last digit
        }
        return revDigits;
    }
};
