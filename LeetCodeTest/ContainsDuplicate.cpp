#include "ContainsDuplicate.h"

void ContainsDuplicate::Process()
{
	cout << (containsDuplicate(vector<int>{1,2,54,2,1324,32,3,4,5,21,3,45,6,2535})?"True":"False") << endl;
}
#if false
bool ContainsDuplicate::containsDuplicate(vector<int>& nums)
{
	unordered_map<int, bool>checker;
	for (size_t i = 0; i < nums.size();++i) 
		checker.insert(pair<int, bool>(nums[i], true));
	return nums.size()!=checker.size();
}
#else
bool ContainsDuplicate::containsDuplicate(vector<int>& nums)
{
	unordered_map<int, bool>checker;
	for (size_t i = 0; i < nums.size(); ++i)
	{
		if (checker.count(nums[i]) == 1)return true;
		checker[nums[i]] = true;
	}
	return false;
}
#endif