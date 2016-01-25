#pragma once
#include "Solution.h"

class StringToIntergerTry2 :public Solution
{
public:
	void Process();
	int myAtoi(string str);
	int SolveByCore(string str);
};