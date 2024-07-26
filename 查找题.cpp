//给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，
//写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。

//样例1
//输入: nums = [-1,0,3,5,9,12], target = 9     
//输出: 4

//输入: nums = [-1,0,3,5,9,12], target = 2     
//输出: -1
//解释 : 2 不存在 nums 中因此返回 - 1

#include <iostream>
#include <ctime>
#include <unordered_map>
using namespace std;



int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	// 获取开始时间
	clock_t start = clock();

	//中间过程
	//过程1 二分查找
	//样例1 9633ms
	//样例2 9133ms
	/*
	int n,target;
	int a[100];
	cin >> n >> target;
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	int left = 0;
	int right = n-1;
	
	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > target)
		{
			right = mid - 1;
		}
		else if(a[mid]<target) {
			left = mid + 1;
		}
		else if(a[mid]==target) {
			cout << mid << endl;
			break;
			
		}
	}
	if (left > right) {
		cout << -1 << endl;
	}*/

	
	//过程2 暴力查找
	//样例1 8948ms
	//样例2 7873ms
	/*int n, target;
	int a[100];
	bool found = false;
	cin >> n >> target;
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
		if (target == a[i]) {
			cout << i << endl;
			found = true;
		}
	}
	if (!found)
	{
		cout << -1 << endl;
	}*/

	// 获取结束时间
	clock_t end = clock();



	// 计算执行时间（以毫秒为单位）
	double execution_time = (double)(end - start) / CLOCKS_PER_SEC * 1000;

	cout << "Execution time: " << execution_time << " ms" << endl;

	return 0;
}