#include "MaxLengthOfSubString.h"

void MaxLengthOfSubString::Process()
{
	cout << lengthOfLongestSubstring("aa") << endl;
	cout << lengthOfLongestSubstring("abba") << endl;
	cout << lengthOfLongestSubstring("a") << endl;
	cout << lengthOfLongestSubstring("") << endl;
}
int MaxLengthOfSubString::lengthOfLongestSubstring(string s)
{
	for (int i = 0; i < 256; ++i)
		IsOc[i] = -1;
	int index_start = 0, index_end = 0;
	int current_index = 0, current_length = 0, max_length = 0;

	for (; index_end < s.length(); ++index_end)
	{
		current_index = s.c_str()[index_end];
		if (IsOc[current_index] != -1 && index_start < IsOc[current_index] + 1)
			index_start = IsOc[current_index] + 1;
		IsOc[current_index] = index_end;
		current_length = index_end - index_start + 1;
		if (current_length > max_length)
			max_length = current_length;
	}
	return max_length;
}