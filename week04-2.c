// week04-2.c �O���Ѫ�leetcode �D���D Easy �D(�G�X�@)
// leetcode 2529. Maximum Count of Positive Integer and Negative Integer
int maximumCount(int* nums, int numsSize) {

    int pos = 0, neg = 0; // �j��e��, ���O0

    for(int i=0; i<numsSize; i++) {
        if( nums[i] > 0) pos++; //����
        if( nums[i] < 0) neg++; //�t��
    }


    if(pos>neg) return pos; // ���Ƥ���h, ����
    else return neg; //���M,�N�t��
}
