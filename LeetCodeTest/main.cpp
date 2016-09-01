//basics
#include "Solution.h"
#include "TestSeg.h"
#include "test.h"
//solutions
#include "BestTimetoBuyandSellStockwithCooldown.h"
#include "ContainerWithMostWater.h"
#include "ContainsDuplicate.h"
#include "ImplementstrStr.h"
#include "IntergerReverse.h"
#include "IntergerToRoman.h"
#include "LetterCombinationsofaPhoneNumber.h"
#include "LongestCommonPrefix.h"
#include "LongestPalindrome.h"
#include "MaxLengthOfSubString.h"
#include "MergeTwoSortedLists.h"
#include "PalindromeNumber.h"
#include "ProductofArrayExceptSelf.h"
#include "RegularExpressionMatching.h"
#include "RemoveDuplicatesfromSortedArray.h"
#include "RemoveElement.h"
#include "RemoveNthNodeFromEndofList.h"
#include "RomanToInteger.h"
#include "SearchforaRange.h"
#include "SearchInsertPosition.h"
#include "SingleNumberII.h"
#include "StringToInterger.h"
#include "StringToIntergerTry2.h"
#include "ThreeSum.h"
#include "ThreeSumClosest.h"
#include "ValidParentheses.h"
#include "ZigZagConversion.h"

int main(int argc, char* argv[])
{
	TestCasesManager myMG(true);
	vector<Solution*> myTestSet;
#if false
	myTestSet.push_back(new ContainerWithMostWater());
	myTestSet.push_back(new ContainsDuplicate());
	myTestSet.push_back(new ImplementstrStr());
	myTestSet.push_back(new IntergerReverse());
	myTestSet.push_back(new IntergerReverse());
	myTestSet.push_back(new LetterCombinationsofaPhoneNumber());
	myTestSet.push_back(new LongestCommonPrefix());
	myTestSet.push_back(new LongestPalindrome());
	myTestSet.push_back(new MaxLengthOfSubString());
	myTestSet.push_back(new MergeTwoSortedLists());
	myTestSet.push_back(new PalindromeNumber());
	myTestSet.push_back(new ProductofArrayExceptSelf());
	myTestSet.push_back(new RegularExpressionMatching());
	myTestSet.push_back(new RemoveDuplicatesfromSortedArray());
	myTestSet.push_back(new RemoveElement());
	myTestSet.push_back(new RemoveNthNodeFromEndofList());
	myTestSet.push_back(new RomanToInteger());
	myTestSet.push_back(new SearchforaRange());
	myTestSet.push_back(new StringToInterger());
	myTestSet.push_back(new StringToIntergerTry2());
	myTestSet.push_back(new ThreeSum());
	myTestSet.push_back(new ThreeSumClosest());
	myTestSet.push_back(new ValidParentheses());
	myTestSet.push_back(new ZigZagConversion());
	myTestSet.push_back(new ImplementstrStr());

	myTestSet.push_back(new SingleNumberII());
	myTestSet.push_back(new ConCreteTestSeg());
	myTestSet.push_back(new ConCreteTestSeg2());
	myTestSet.push_back(new SearchInsertPosition());
#else
	myTestSet.push_back(new BestTimetoBuyandSellStockwithCooldown());

#endif
	myMG.Add(myTestSet);
	myMG.RunAllSeg();

	cout << "Press Enter to Exit" << endl;
	getchar();
	return 0;
}