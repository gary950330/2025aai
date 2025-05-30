// week15-1.cpp 給你兩個數字 n 對應 1 ... n的數, m 要做除法的餘數
// Leetcode 2894. Divisible and Non-divisible Sums Difference
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0, num2 = 0;
        for(int i=1; i<=n; i++) {
            if( i%m > 0 ) num1 += i;
            else num2 += i;
        }
        return num1 - num2;
    }
};
