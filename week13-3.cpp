/// week13-3.cpp
/// ������۰��k �䵪�� �̤j���]��
#include <stdio.h>
int gcd(int a, int b)
{
    printf("�Ѥja: %d �ѤGb: %d �ѤTc: %d\n", a, b, a%b);
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b, a%b);
} ///
int main()
{
    printf("�п�J2�ӼƦr(ex. 51 68)");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("�����̤j���]��:%d\n", ans);
}
