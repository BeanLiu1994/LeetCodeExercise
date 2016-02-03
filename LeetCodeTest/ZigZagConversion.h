#pragma once
#include "Solution.h"

class ZigZagConversion:public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "ZigZagConversion"; }
	string convert(string s, int numRows);
};