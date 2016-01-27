#include "LongestCommonPrefix.h"

void LongestCommonPrefix::Process()
{
	vector<string> a = { "aa","a" };
	cout << longestCommonPrefix(a) << endl;
}
string LongestCommonPrefix::longestCommonPrefix(vector<string>& strs)
{
	if (strs.empty()) return"";
	string longestCP = strs[0];
	for (int i = 1; i < strs.size(); ++i)
	{
		//check every one and modify longestCP
		int length = min(strs[i].size(), longestCP.size());
		longestCP = longestCP.substr(0, length);
		for (int j = 0; j < length; ++j)
		{
			if (strs[i][j] != longestCP[j])
			{
				longestCP = longestCP.substr(0, j);
				break;
			}
		}
		// binary search ?
	}
	return longestCP;
}