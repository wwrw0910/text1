#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"
void Test()
{
	LTNode* plist = LTInit();
	
	LTPushFront(plist, 1);
	LTPushFront(plist, 2);
	LTPushFront(plist, 3);
	LTPushFront(plist, 4);
	LTPrint(plist);
}
int main()
{

	Test();
	return 0;
}