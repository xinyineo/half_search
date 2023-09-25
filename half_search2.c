int binarySearch(int* nums, int target, int left, int right) {
	if (left > right) return -1;
	int mid = (left + right) / 2;
	if (target == nums[mid]) return mid;
	if (target < nums[mid])
		return binarySearch(nums, target, left, mid - 1);
	else
		return binarySearch(nums, target, mid + 1, right);
}

int search(int* nums, int numsSize, int target) {
	return binarySearch(nums, target, 0, numsSize - 1);

}