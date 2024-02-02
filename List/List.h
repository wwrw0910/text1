#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int LTDataType;
typedef struct ListNode
{
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;


//void LTInit(LTNode** pphead);
LTNode* LTInit();
void LTDestroy(LTNode** pphead);
void LTDestroy1(LTNode* phead);

//不需要改变哨兵位传一级指针
void LTPushBack(LTNode* phead, LTDataType x);
void LTPushFront(LTNode* phead, LTDataType x);

void LTPrint(LTNode* phead);

void LTPopBack(LTNode* phead);
void LTPopFront(LTNode* phead);

LTNode* LTFind(LTNode* phead, LTDataType x);

void LTInsert(LTNode* pos, LTDataType x);
void LTErase(LTNode* pos);

