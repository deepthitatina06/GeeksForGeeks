class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int cnt = 0;
        int original = n; // store original number
        
        while (n > 0) {
            int digit = n % 10;  // extract last digit
            if (digit != 0 && original % digit == 0) {
                cnt++;
            }
            n /= 10;  // move to next digit
        }
        
        return cnt;
    }
};
