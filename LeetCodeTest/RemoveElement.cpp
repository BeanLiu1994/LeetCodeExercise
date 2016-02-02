#include "RemoveElement.h"

void RemoveElement::Process()
{
	cout << removeElement(vector<int>{3,2,1,1,1,2,3,1}, 1) << endl;
}
int RemoveElement::removeElement(vector<int>& nums, int val) {
	if (nums.empty())return 0;
	int numsSize = nums.size();
	int current_index = 0, request_index = 0;
	for (; request_index<numsSize;)
	{
		while (request_index < numsSize && nums[request_index] == val)
			++request_index;
		if (request_index >= numsSize)break;
		if (request_index != current_index)
			nums[current_index] = nums[request_index];
		++current_index;
		++request_index;
	}
	return current_index;
}