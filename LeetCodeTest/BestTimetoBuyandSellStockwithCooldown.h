#pragma once
#include "Solution.h"

class BestTimetoBuyandSellStockwithCooldown :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "BestTimetoBuyandSellStockwithCooldown"; }
	int maxProfit(vector<int>& prices);
	int maxProfit_dp(vector<int>& prices,int, int);
	vector<vector<int>> dp_table;
};