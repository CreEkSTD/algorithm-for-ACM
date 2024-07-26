# algorithm-for-ACM

一些算法实现的积累库

主要题目来源--leetcode

https://leetcode.cn/



**有一种来显示消耗时间的算法，我在练习过程中会加入，来实现一个清晰的可视化效果**

```c++
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  // 获取开始时间
  clock_t start = clock();
  // 获取结束时间
  clock_t end = clock();
  // 计算执行时间（以毫秒为单位）
  double execution_time = (double)(end - start) / CLOCKS_PER_SEC * 1000;
  
  cout << "Execution time: " << execution_time << " ms" << endl;
  
  return 0;
}
```

我所有的程序也都会按照这样一种写法



## 下面对一些数据结构进行一些基本的介绍：

### 数组

**数组下标都是从0开始的**

**数组内存空间的地址是连续的**

数组的删除或者增添的开销比较大

数组的元素是不能删的，只能覆盖
