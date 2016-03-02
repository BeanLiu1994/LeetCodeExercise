#include "SingleNumberII.h"

void SingleNumberII::Process()
{
	cout << singleNumber(vector<int>{1,1,4,2,4,2,4,2,6,3,6,3,6,1}) << endl;
}
int SingleNumberII::singleNumber(vector<int>& nums)
{
	unordered_map<int, int> temp;
	for (auto n : nums)
	{
		if (temp.count(n) == 0)
			temp.insert(pair<int, int>{n,1});
		else
			++temp[n];
	}
	for (auto n : temp)
	{
		if (n.second != 3)return n.first;
	}
	return -1;
}