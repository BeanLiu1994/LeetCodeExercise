#pragma once
#include "Solution.h"
class ImplementstrStr :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "ImplementstrStr"; }
	int strStr(string haystack, string needle);
};