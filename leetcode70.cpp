// #input 輸入一個數字，可以跳一步或兩步，並計算出到達該數字方法的數量。
// #output 到該數字的方法次數。
// #解題思路，到達該數字的方法可以被計算為前一個與前兩個數字的相加，因此可以視為費氏數列。

class Solution {
public:
    int climbStairs(int n) {
        int prev1 = 1 , prev2=2;
        int res=0;
        for(int i=3;i<=n;i++){
            res = prev1+prev2;
            prev1 = prev2;
            prev2 =res;
        }
        if(n==2)return 2;
        if(n==1)return 1;
        return res;
        printf("%d",res);
        
    }
};