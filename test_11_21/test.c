#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//递归思想
//int count = 0;
//int fib(int n)
//{
//		if (n == 3)
//			count++;
//	if (n <= 2)
//		return 1;
//	else
//		 return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	printf("%d", count);
//}
//迭代思想
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	} 
//	return c;
//}
//
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf_s("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = 5;
//	int ret1 = 0;
//	int ret2 = 0;
//
//	ret1 = !(a + b) ;
//	ret2 = !(a + b)+c-1&&b+c/2;
//
//	printf("%d\n", ret1);
//	printf("%d", ret2);
//}
//int main()
//{
//	float a = 0;
//	float b = 0;
//	scanf("%f %f", &a,&b);
//	float c = 0;
//	float d = 0;
//	c = 2*(a + b);
//	d = a * b;
//	printf("%10.2f\n%10.2f", c,d);
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int target = 0;
//	scanf("%d",&target);
//	int left = 0;
//	int right = size-1;
//	int mid = left + (right - left) / 2;
//	int nummid = arr[mid];
//	while (left <= right)
//	{
//		if (nummid < target)
//		{
//			left = mid + 1;
//			mid = left + (right - left) / 2;
//		}
//		if (nummid > target)
//		{
//			right = mid - 1;
//			mid = left + (right - left) / 2;
//		}
//		else
//			printf("下标：%d\n", mid);
//		break;
//	}
//	return -1;
//}
//
//int binarySearch(int nums[], int numsSize, int target) {
//	int left = 0;//首元素下标
//	int right = numsSize - 1;//末元素的下标(总长度-1,数组从0开始)
//
//	while (left <= right) {
//		int mid = left + (right - left) / 2;//中间元素的下标 防止溢出
//		int numsMid = nums[mid];//中间元素
//		//目标值大于中间元素时
//		if (numsMid < target) 
//		{
//			//查找范围：[mid+1,right]
//			left = mid + 1;
//		}
//		//目标值小于中间元素时
//		else if (target < numsMid) {
//			//查找范围：[left,mid-1]
//			right = mid - 1;
//		}
//		else return mid;//相等时直接返回该元素下标
//	}
//	return -1;//没有找到目标值,返回-1
//}
//void main() {
//	int nums[] = { -1,0,3,5,9,12 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);//数组长度
//	int target = 0;//目标值target
//	scanf("%d", &target);
//	printf("下标：%d", binarySearch(nums, numsSize, target));
//}

int main()
{
	int a = 0x11223344;
		short * pa = &a;
	* pa = 0;
 	return 0;
}
























































































































































































































































