// week15-1.cpp ���A��ӼƦr n ���� 1 ... n����, m �n�����k���l��
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
