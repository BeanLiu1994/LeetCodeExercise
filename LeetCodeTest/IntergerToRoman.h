#pragma once
#include "Solution.h"

class IntergerToRoman :public Solution
{
public :
	virtual void Process();
	string intToRoman(int num);
	string IntergerToRoman_OneNumber(int& num, string& charset);
};