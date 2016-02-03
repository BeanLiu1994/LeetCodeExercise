#pragma once

#include "Solution.h"

class IntergerReverse :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "IntergerReverse"; }
	int reverse(int x);
};