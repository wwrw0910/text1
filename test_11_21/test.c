#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ݹ�˼��
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
//����˼��
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
//			printf("�±꣺%d\n", mid);
//		break;
//	}
//	return -1;
//}
//
//int binarySearch(int nums[], int numsSize, int target) {
//	int left = 0;//��Ԫ���±�
//	int right = numsSize - 1;//ĩԪ�ص��±�(�ܳ���-1,�����0��ʼ)
//
//	while (left <= right) {
//		int mid = left + (right - left) / 2;//�м�Ԫ�ص��±� ��ֹ���
//		int numsMid = nums[mid];//�м�Ԫ��
//		//Ŀ��ֵ�����м�Ԫ��ʱ
//		if (numsMid < target) 
//		{
//			//���ҷ�Χ��[mid+1,right]
//			left = mid + 1;
//		}
//		//Ŀ��ֵС���м�Ԫ��ʱ
//		else if (target < numsMid) {
//			//���ҷ�Χ��[left,mid-1]
//			right = mid - 1;
//		}
//		else return mid;//���ʱֱ�ӷ��ظ�Ԫ���±�
//	}
//	return -1;//û���ҵ�Ŀ��ֵ,����-1
//}
//void main() {
//	int nums[] = { -1,0,3,5,9,12 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);//���鳤��
//	int target = 0;//Ŀ��ֵtarget
//	scanf("%d", &target);
//	printf("�±꣺%d", binarySearch(nums, numsSize, target));
//}

int main()
{
	int a = 0x11223344;
		short * pa = &a;
	* pa = 0;
 	return 0;
}
























































































































































































































































