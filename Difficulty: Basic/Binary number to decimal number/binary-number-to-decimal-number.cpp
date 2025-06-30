class Solution {
  public:
    int binaryToDecimal(string &b) {
        int decimal=0;
        int power=0;
        for(int i=b.length()-1;i>=0;i--){
            if(b[i]=='1'){
                decimal+=(1<<power);
            }
            power++;
        }
        return decimal;// Code here.
    }
};