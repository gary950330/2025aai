/// week10-2.cpp
/// ���F�U�P�Ҹ� [�ϧǼƦr]
#include <stdio.h>
int main()
{
    printf("�п�J1�ӼƦr(ex. 379): ");
    int n;
    scanf("%d", &n);
    printf("�A��J�F %d\n", n);
    ///printf("�����Ӧ�ƬO %d\n", n %10);
    ///printf("�����Q��ƬO %d\n", n/10 %10);
    ///printf("�����ʦ�ƬO %d\n", n/10/10 %10);
    while(n>0){
        printf("�{�b�� %d ��� %d\n", n, n%10);
        n = n / 10; ///
    }
}
