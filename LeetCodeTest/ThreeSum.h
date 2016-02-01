#pragma once
#include "Solution.h"
class ThreeSum :public Solution
{
public:
	virtual void Process();
	vector<vector<int>> threeSum(vector<int>& nums);
};