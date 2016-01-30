#include "ThreeSum.h"

void ThreeSum::Process()
{
	vector<vector<int>> result = threeSum(vector<int>{
		0, -4, -5, 3, 1, 3, 4, 2, -5, 2, 4, 2, -5
	});
	cout << result.size() << endl;
}
vector<vector<int>> ThreeSum::threeSum(vector<int>& nums)
{
	vector<vector<int>> result;
	int nums_size = nums.size();
	if (nums_size < 3)
		return result;// Empty cases.
	sort(nums.begin(), nums.end());
	for (size_t p_s = 0; p_s < nums_size; ++p_s)
	{
		if (p_s>=1 && -nums[p_s] == -nums[p_s - 1])continue;//avoid duplicate triplets.
		if (nums[p_s] + nums[p_s + 1] + nums[p_s + 2] > 0)break;//minimum sum bigger than 0.
		for (size_t p_e = nums_size - 1; p_e > p_s + 1; --p_e)
		{
			if (p_e<nums_size - 1 && -nums[p_e] == -nums[p_e + 1])continue;//avoid duplicate triplets.
			if (nums[p_s] + nums[p_e] + nums[p_e - 1] < 0)break;//maximum sum smaller than 0. one of the number is set to nums[p_s]
			if (binary_search(nums.begin() + p_s + 1, nums.begin() + p_e, -nums[p_s] + -nums[p_e]))
			{
				result.push_back(vector<int>{ nums[p_s], -nums[p_s] + -nums[p_e], nums[p_e] });
			}
		}
	}
	return result;
}