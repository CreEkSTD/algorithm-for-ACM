//给定一个含有 n 个正整数的数组和一个正整数 s ，找出该数组中满足其和 ≥ s 的长度最小的 连续 子数组，
//并返回其长度。如果不存在符合条件的子数组，返回 0。



#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

using ll = long long;
const ll N = 1e5, inf = 1e9;


int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n = 6, s = 7;
	vector<int> nums = { 2,3,1,2,4,3 };
	//滑动窗口
	int result = 1e9;
	int sum = 0; // 滑动窗口数值之和
	int i = 0; // 滑动窗口起始位置
	int length = 0;
	for (int j = 0;j < n;j++)
	{
		sum += nums[j];
		while (sum >= s)
		{
			int length = (j - i + 1);
			if (length < result)
			{
				result = length;
			}
			sum -= nums[i++];

		}
	}

	int res = result;
	cout << res << endl;

	return 0;
}