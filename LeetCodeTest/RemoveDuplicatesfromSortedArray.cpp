#include "RemoveDuplicatesfromSortedArray.h"


void RemoveDuplicatesfromSortedArray::Process()
{
	cout << removeDuplicates(vector<int>{1,2,2,2,2,2,2,2,3}) << endl;
}
int RemoveDuplicatesfromSortedArray::removeDuplicates(vector<int>& nums)
{
	if (nums.empty())return 0;
	int numsSize = nums.size();
	int current_index = 0, request_index = 0;
	for (; request_index<numsSize;)
	{
		while (request_index<numsSize - 1 && nums[request_index] == nums[request_index + 1])
			++request_index;
		if (request_index != current_index)
			nums[current_index] = nums[request_index];
		++current_index;
		++request_index;
	}
	return current_index;
}