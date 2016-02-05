#include "SearchforaRange.h"
void SearchforaRange::Process()
{
	for (auto& m : searchRange(vector<int>{2, 2}, 3)) { cout << m << ','; }cout << endl;
	for (auto& m : searchRange(vector<int>{1}, 0)) { cout << m << ','; }cout << endl;
	for (auto& m : searchRange(vector<int>{1}, 1)) { cout << m << ','; }cout << endl;
	for (auto& m : searchRange(vector<int>{1, 1}, 1)) { cout << m << ','; }cout << endl;
	for (auto& m : searchRange(vector<int>{5, 7, 7, 8, 8, 10}, 8)) { cout << m << ','; }cout << endl;
	for (auto& m : searchRange(vector<int>{5, 7, 7, 8, 8, 10}, 7)) { cout << m << ','; }cout << endl;
	for (auto& m : searchRange(vector<int>{5, 7, 7, 8, 8, 10}, 6)) { cout << m << ','; }cout << endl;
}
vector<int> SearchforaRange::searchRange(vector<int>& nums, int target)
{
	//我的想法就是2个logn搜索
	//就是条件想的有些复杂了
	//看discuss里更简单的方法就是普通的搜索
	if (nums.empty())return vector<int>{-1, -1};
	int low = 0, high = nums.size() - 1, mid, left = -1, right = -1;
	while (low <= high)
	{
		mid = (high + low) / 2;
		if ( nums[mid] < target)
		{
			low = mid + 1;
		}
		else if (mid >=1 && nums[mid-1] >= target)
		{
			high = mid - 1;
		}
		else if (nums[mid]>target)
		{
			return vector<int>{-1, -1};
		}
		else if (nums[mid] == target)
		{
			left = mid;
			break;
		}
		else
			break;
	}
	low = left, high = nums.size() - 1;
	while (low <= high)
	{
		mid = (high + low) / 2;
		if (nums[mid] > target)
		{
			high = mid - 1;
		}
		else if (mid <= (int)nums.size() - 2 && nums[mid + 1] <= target)
		{
			low = mid + 1;
		}
		else if(nums[mid] == target)
		{
			right = mid;
			return vector<int>{left, right};
		}
		else break;
	}
	return vector<int>{left, right};
}
