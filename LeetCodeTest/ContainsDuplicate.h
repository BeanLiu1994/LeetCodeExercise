#pragma once
#include "Solution.h"
class ContainsDuplicate :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "ContainsDuplicate"; }
	bool containsDuplicate(vector<int>& nums);
};