// week04-2.c 琌さぱleetcode 珼驹肈 Easy 肈()
// leetcode 2529. Maximum Count of Positive Integer and Negative Integer
int maximumCount(int* nums, int numsSize) {

    int pos = 0, neg = 0; // 癹伴玡, 常琌0

    for(int i=0; i<numsSize; i++) {
        if( nums[i] > 0) pos++; //タ计
        if( nums[i] < 0) neg++; //璽计
    }


    if(pos>neg) return pos; // タ计ゑ耕, タ计
    else return neg; //ぃ礛,碞璽计
}
