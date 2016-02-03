#pragma once
#include "Solution.h"

class StringToIntergerTry2 :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "StringToIntergerTry2"; }
	int myAtoi(string str);
	int SolveByCore(string str);
};