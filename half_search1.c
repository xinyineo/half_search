
//α������ʽ���ύ��ַ��leetcode
//��Ҫ����n�β��ܵõ������ʱ�临�Ӷ�ΪO(n)
int search(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target)
            return i;

    }
    return -1;

}

