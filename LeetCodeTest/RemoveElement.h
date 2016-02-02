#pragma once
#include "Solution.h"
class RemoveElement :public Solution
{
public:
	virtual void Process();
	int removeElement(vector<int>& nums, int val);
};