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
	int nums_size = nums.size(), sum = 0;
	if (nums_size < 3)
		return result;// Empty cases.
	sort(nums.begin(), nums.end());
	for (size_t p_s = 0; p_s < nums_size; ++p_s)
	{
		if (p_s >= 1 && nums[p_s] == nums[p_s - 1])continue;//avoid duplicate triplets.
		if (nums[p_s] + nums[p_s + 1] + nums[p_s + 2] > sum)break;//minimum sum bigger than sum.

		for (size_t p_e = nums_size - 1, p_m = p_s + 1; p_m < p_e;)
		{
			if (nums[p_m] + nums[p_e] > sum - nums[p_s]) p_e--;
			else if (nums[p_m] + nums[p_e] < sum - nums[p_s]) p_m++;
			else {
				result.push_back(vector<int>{nums[p_s], nums[p_m], nums[p_e]});
				while (p_m < p_e && nums[p_e] == nums[p_e - 1]) p_e--;//avoid duplicate triplets.
				while (p_m < p_e && nums[p_m] == nums[p_m + 1]) p_m++;
				p_e--; p_m++;
			}
		}
	}
	return result;
}