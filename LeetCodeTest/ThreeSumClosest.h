#pragma once
#include "Solution.h"
#include "ThreeSum.h"
class ThreeSumClosest :public Solution
{
public:
	virtual void Process();
	int threeSumClosest(vector<int>& nums, int target);
	bool threeSumExists(vector<int>& nums, int sum);
};