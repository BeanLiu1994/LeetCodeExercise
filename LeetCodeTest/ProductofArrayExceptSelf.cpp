#include "ProductofArrayExceptSelf.h"

void ProductofArrayExceptSelf::Process()
{
	vector<int> a = productExceptSelf(vector<int>{ 1, 4, 3, 5, 2, 6, 34 });
	for (size_t i = 0; i < a.size(); ++i)
	{
		cout << a[i]<<" ";
	}
	cout << endl;
}

vector<int> ProductofArrayExceptSelf::productExceptSelf(vector<int>& nums)
{
	vector<int> left_array(nums), right_array(nums);
	vector<int> result; result.reserve(nums.size());
	for (size_t i = 1; i < nums.size(); ++i) left_array[i] *= left_array[i - 1];
	for (size_t i = nums.size() - 1; i > 0; --i) right_array[i - 1] *= right_array[i];

	for (size_t i = 0; i<nums.size(); ++i)
	{
		result.push_back((i > 0 ? left_array[i - 1] : 1)*(i < nums.size() - 1 ? right_array[i + 1] : 1));
	}
	return result;
}