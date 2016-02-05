#include "SearchInsertPosition.h"

void SearchInsertPosition::Process()
{
	cout << searchInsert(vector<int>{1, 3, 5, 6}, 0) << endl;//0
	cout << searchInsert(vector<int>{1, 3, 5, 6}, 1) << endl;//0
	cout << searchInsert(vector<int>{1, 3, 5, 6}, 2) << endl;//1
	cout << searchInsert(vector<int>{1, 3, 5, 6}, 3) << endl;//1
	cout << searchInsert(vector<int>{1, 3, 5, 6}, 4) << endl;//2
	cout << searchInsert(vector<int>{1, 3, 5, 6}, 5) << endl;//2
	cout << searchInsert(vector<int>{1, 3, 5, 6}, 6) << endl;//3
	cout << searchInsert(vector<int>{1, 3, 5, 6}, 7) << endl;//4
}
int SearchInsertPosition::searchInsert(vector<int>& nums, int target)
{
#ifndef Recursion
	int low = 0, high = nums.size() - 1, mid;
	while (low <= high) {
		mid = low + (high - low) / 2;
		if (nums[mid] < target) low = mid + 1;
		else high = mid - 1;
	}
	return low;
#else
	if (target <= nums[0])return 0;
	else if (target > nums[nums.size() - 1])return nums.size();
	return searchInsert(nums, 0, nums.size(), target);
#endif
}
int SearchInsertPosition::searchInsert(vector<int>& nums, size_t left_ind, size_t right_ind, int target)
{
	if (right_ind - left_ind <= 1)
		if (nums[left_ind] == target)return left_ind;
		else return left_ind + 1;
		size_t middle_ind = (left_ind + right_ind) / 2;
		if (nums[middle_ind] == target)return middle_ind;
		if (nums[middle_ind] < target)return searchInsert(nums, middle_ind, right_ind, target);
		if (nums[middle_ind] > target)return searchInsert(nums, left_ind, middle_ind, target);
}