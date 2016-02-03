#pragma once
#include "Solution.h"

class RomanToInteger :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "RomanToInteger"; }
	int romanToInt(string s);
};