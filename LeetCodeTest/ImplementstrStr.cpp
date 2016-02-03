#include "ImplementstrStr.h"

void ImplementstrStr::Process()
{
	cout << strStr(
		string("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"),
		string("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab")
		) << endl;
}
//最好用KMP算法
//我去学习一下Q^Q
int ImplementstrStr::strStr(string haystack, string needle)
{
	if (needle.empty())return 0;
	int needle_pos = 0, needle_length = needle.size();
	for (int i = 0, next = i + 1; i<haystack.size(); i = next)
	{
		if (haystack[i] == needle[0])
		{
			for (int j = 0; j<needle_length&&j<haystack.size() - i; ++j)
			{
				if (haystack[i + j] == needle[0] && next == i&&j>0)
					next = i + j;
				if (haystack[i + j] != needle[j])
					break;
				if (j == needle_length - 1)
					return i;
			}
			if (next == i)
				next = i + needle_length - 1;
		}
		else
			next = i + 1;
	}
	return -1;
}