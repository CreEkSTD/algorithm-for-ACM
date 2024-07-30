//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素
//并返回移除后数组的新长度。

#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int nums1[4] = {3,2,2,3};
	int nums2[8] = { 0,1,2,2,3,0,4,2 };
	int val1 = 3, val2 = 2;
	////如果从结果的角度可以直接计数
	//int count1 = 0;
	//for (int i = 0;i < 4;i++)
	//{
	//	if (nums1[i] != val1)
	//	{
	//		count1++;
	//	}
	//}
	//int count2 = 0;
	//for (int i = 0;i < 8;i++)
	//{
	//	if (nums2[i] != val2)
	//	{
	//		count2++;
	//	}
	//}
	//cout << count1 << endl;
	//cout << count2 << endl;

	//如果要实际实现的话，建议用双指针,非常省时间
	//快指针fast用来搜索
	//慢指针用来更新下标
	int slow = 0;
	for (int fast = 0;fast < 4;fast++)
	{
		if (val1 != nums1[fast])
		{
			//简写
			nums1[slow++] = nums1[fast];
			////加长版
			//nums1[slow] = nums1[fast];
			//slow++;
		}
	}
	cout << slow << endl;
	slow = 0;
	for (int fast = 0;fast < 8;fast++)
	{
		if (val2 != nums2[fast])
		{
			//简写
			nums2[slow++] = nums2[fast];
			////加长版
			//nums1[slow] = nums1[fast];
			//slow++;
		}
	}
	cout << slow << endl;


	return 0;
}