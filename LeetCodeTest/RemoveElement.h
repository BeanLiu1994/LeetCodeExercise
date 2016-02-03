#pragma once
#include "Solution.h"
class RemoveElement :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "RemoveElement"; }
	int removeElement(vector<int>& nums, int val);
};