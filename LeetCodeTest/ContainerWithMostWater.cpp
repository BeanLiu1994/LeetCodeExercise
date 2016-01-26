#include "ContainerWithMostWater.h"


void ContainerWithMostWater::Process()
{
	vector<int> a = { 1,1,3,3,5,4,6,3 };
	cout << maxArea(a) << endl;
}
int ContainerWithMostWater::maxArea(vector<int>& height)
{
	int Area = 0, maxArea = 0;;
	for (int iter_left = 0, iter_right = height.size() - 1; iter_left < iter_right;)
	{
		Area = (height[iter_left] > height[iter_right] ? height[iter_right] : height[iter_left])*(iter_right - iter_left);
		//this line calculates the water area of container (two lines and x-axis).

		if (Area > maxArea)maxArea = Area;
		//And records the biggest one.

		if (height[iter_left] < height[iter_right])
			do { ++iter_left; } while (height[iter_left] <= height[iter_left - 1]);
		else
			do { --iter_right; } while (height[iter_right] <= height[iter_right + 1]);
		//Next step should be possible to get a larger area.
		//1.determine which side to move.
		//  if I move the bigger one, Area is still not large because of the smaller side.
		//  That's why I move the smaller one.
		//2.if inner number is less than the outer one, Area can't be larger.
		//  so I just pass them over.
	}
	return maxArea;
}