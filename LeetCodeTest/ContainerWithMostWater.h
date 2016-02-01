#pragma once
#include "Solution.h"

class ContainerWithMostWater :public Solution
{
public:
	virtual void Process();
	int maxArea(vector<int>& height);
};