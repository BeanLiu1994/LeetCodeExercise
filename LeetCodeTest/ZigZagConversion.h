#pragma once
#include "Solution.h"

class ZigZagConversion:public Solution
{
public:
	virtual void Process();
	string convert(string s, int numRows);
};