//给你一个按 非递减顺序 排序的整数数组 nums，
//返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	////如果以结果为准也可以直接欺骗,直接用algorithm
	vector<int> nums = { -7,-3,2,3,11 };
	//for (auto& y : nums)
	//{
	//	y = y * y;
	//}
	//sort(nums.begin(),nums.end(),less<int>());
	//for (auto& y : nums)
	//{
	//	cout << y << " ";
	//}
	//cout << endl;

	//如果要真正实现呢就使用双指针
	int k = nums.size() - 1;
	vector<int> result(nums.size(), 0);
	for (int i = 0, j = nums.size() - 1;i <= j;)
	{
		if (nums[i] * nums[i] > nums[j] * nums[j])
		{
			result[k--] = nums[i] * nums[i];
			//左边存进去了，左边要变
			i++;
		}
		else {
			result[k--] = nums[j] * nums[j];
			j--;
		}
	}

	for (auto& y : result)
	{
		cout << y << " ";
	}
	cout << endl;

	return 0;
}