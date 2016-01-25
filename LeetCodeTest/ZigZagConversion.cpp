#include "ZigZagConversion.h"


void ZigZagConversion::Process()
{
	cout << convert("testitfirst", 4) << endl;
}
string ZigZagConversion::convert(string s, int numRows)
{
	if (numRows == 1) 
		return s;

	string result;
	result.reserve(s.length());
	vector<string> result_in_rows(numRows, result);
	int current_row = 0;
	int isdec = -1;

	for (int i = 0; i < s.length(); ++i)
	{
		result_in_rows[current_row].push_back(s[i]);
		if (current_row == numRows - 1)
			isdec = -1;
		else if (current_row == 0)
			isdec = 1;
		current_row += isdec;
	}
	for (int i = 0; i < numRows; ++i) 
		result += result_in_rows[i];

	return result;
}