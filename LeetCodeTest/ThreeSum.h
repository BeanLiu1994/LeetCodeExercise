#pragma once
#include "Solution.h"
class ThreeSum :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "ThreeSum"; }
	vector<vector<int>> threeSum(vector<int>& nums);
};