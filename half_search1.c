
//伪代码形式，提交地址在leetcode
//需要遍历n次才能得到结果，时间复杂度为O(n)
int search(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target)
            return i;

    }
    return -1;

}

