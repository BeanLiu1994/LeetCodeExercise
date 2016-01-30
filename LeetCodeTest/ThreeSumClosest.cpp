#include "ThreeSumClosest.h"

void ThreeSumClosest::Process()
{
	int result = threeSumClosest(vector<int>{
		0, -4, -5, 3, 1, 3, 4, 2, -5, 2, 4, 2, -5
	},-100);
	cout << result << endl;
}
int ThreeSumClosest::threeSumClosest(vector<int>& nums, int target)
// using solution of ThreeSum problem, Maybe this is not the best way to solve this problem.
{
	int try_times = 1000;
	int target_u = target + 1, target_d = target - 1;
	if (threeSumExists(nums, target))return target;
	while (1)
	{
		if (threeSumExists(nums, target_d))return target_d;
		if (threeSumExists(nums, target_u))return target_u;
		--target_d; ++target_u;
		if (--try_times < 0) return -1;
	}
}
bool ThreeSumClosest::threeSumExists(vector<int>& nums,int sum)
{
	vector<vector<int>> result;
	int nums_size = nums.size();
	if (nums_size < 3)
		return false;// Empty cases.
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
				return true;
			}
		}
	}
	return false;
}