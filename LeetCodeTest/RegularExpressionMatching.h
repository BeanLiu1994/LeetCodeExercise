#pragma once
#include "Solution.h"
class RegularExpressionMatching :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "RegularExpressionMatching"; }
	bool isMatch(string s, string p);
};