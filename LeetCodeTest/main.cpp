//basics
#include "Solution.h"
#include "TestSeg.h"
//solutions
#include "ContainerWithMostWater.h"
#include "ImplementstrStr.h"
#include "IntergerReverse.h"
#include "IntergerToRoman.h"
#include "LetterCombinationsofaPhoneNumber.h"
#include "LongestCommonPrefix.h"
#include "LongestPalindrome.h"
#include "MaxLengthOfSubString.h"
#include "MergeTwoSortedLists.h"
#include "PalindromeNumber.h"
#include "RegularExpressionMatching.h"
#include "RemoveDuplicatesfromSortedArray.h"
#include "RemoveElement.h"
#include "RemoveNthNodeFromEndofList.h"
#include "RomanToInteger.h"
#include "StringToInterger.h"
#include "StringToIntergerTry2.h"
#include "ThreeSum.h"
#include "ThreeSumClosest.h"
#include "ValidParentheses.h"
#include "ZigZagConversion.h"
//测试方式:将代码直接放进来
class ConCreteTestSeg :public TestSeg
{
private:
#pragma region [Content of test.cpp]
//=============================== File Start ===============================
#include "Solution.h"

	int getPeachNumber(int n)
	{
		if (n == 10)
		{
			return 1;
		}
		else
		{
			int num = (getPeachNumber(n + 1) + 1) * 2;
			cout << "第" << n << "天所剩桃子" << num << "个" << endl;
			return num;
		}
	}
	int main()
	{
		int num = getPeachNumber(1);
		cout << "猴子第一天摘了:" << num << "个桃子。" << endl;
		return 0;
	}
//================================ File End ================================
#pragma endregion
};
//另一种测试方式:直接include文件,但是对应文件需要设置为"从生成中排除"
class ConCreteTestSeg2 :public TestSeg
{
private:
#pragma region [Content of test.cpp]
//=============================== File Start ===============================
#include "test.cpp"
//================================ File End ================================
#pragma endregion
};

int main(int argc, char* argv[])
{
	TestCasesManager myMG(true);
	vector<Solution*> myTestSet;
#if false
	myTestSet.push_back(new ContainerWithMostWater());
	myTestSet.push_back(new ImplementstrStr());
	myTestSet.push_back(new IntergerReverse());
	myTestSet.push_back(new IntergerReverse());
	myTestSet.push_back(new LetterCombinationsofaPhoneNumber());
	myTestSet.push_back(new LongestCommonPrefix());
	myTestSet.push_back(new LongestPalindrome());
	myTestSet.push_back(new MaxLengthOfSubString());
	myTestSet.push_back(new MergeTwoSortedLists());
	myTestSet.push_back(new PalindromeNumber());
	myTestSet.push_back(new RegularExpressionMatching());
	myTestSet.push_back(new RemoveDuplicatesfromSortedArray());
	myTestSet.push_back(new RemoveElement());
	myTestSet.push_back(new RemoveNthNodeFromEndofList());
	myTestSet.push_back(new RomanToInteger());
	myTestSet.push_back(new StringToInterger());
	myTestSet.push_back(new StringToIntergerTry2());
	myTestSet.push_back(new ThreeSum());
	myTestSet.push_back(new ThreeSumClosest());
	myTestSet.push_back(new ValidParentheses());
	myTestSet.push_back(new ZigZagConversion());
	myTestSet.push_back(new ImplementstrStr());

	myTestSet.push_back(new ConCreteTestSeg2());
#else
	myTestSet.push_back(new ConCreteTestSeg());
#endif
	myMG.Add(myTestSet);
	myMG.RunAllSeg();

	cout << "Press Enter to Exit" << endl;
	getchar();
	return 0;
}