#pragma once
#include "Solution.h"

class ContainerWithMostWater :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "ContainerWithMostWater"; }
	int maxArea(vector<int>& height);
};