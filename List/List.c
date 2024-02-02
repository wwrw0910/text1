#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

//void LTInit(LTNode** pphead)
//{
//	*pphead = (LTNode*)malloc(sizeof(LTNode));
//	if (*pphead == NULL)
//	{
//		perror("malloc fail!");
//		exit(-1);
//	}
//	(*pphead)->data = -1;
//	(*pphead)->prev = (*pphead)->next = *pphead;
//}


LTNode* LTBuyNote(LTDataType x)
{	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
if (newnode == NULL)
{
	perror("malloc fail!");
	exit(-1);
} 
newnode->data = x;
newnode->next = newnode->prev = newnode;
return newnode;
}

LTNode* LTInit()
{
	LTNode* phead = LTBuyNote(-1);
	return phead;
}

void LTPrint(LTNode* phead)
{
	assert(phead);
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("\n");
}



void LTPushBack(LTNode* phead, LTDataType x)
{
	LTNode* newnode = LTBuyNote(x);
	newnode->next = phead;
	newnode->prev = phead->prev;

	phead->prev->next = newnode;
	phead->prev = newnode;  
}
void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNote(x);
	newnode->prev = phead;
	newnode->next = phead->next;
	  
	phead->next = newnode;
	newnode->next->prev = newnode;

}

void LTPopBack(LTNode* phead)
{
	assert(phead);
	//只有一个哨兵位节点
	assert(phead->next != phead);
	LTNode* del = phead->prev;
	LTNode* prev = del->prev;
	prev->next = phead;
	phead->prev = prev;
	free(del);
	del = NULL;
}

void LTPopFront(LTNode* phead)
{
	assert(phead);
	//只有一个哨兵位节点
	assert(phead->next != phead);
	LTNode* del = phead->next;
	LTNode* next = del->next;
	next->prev = phead;
	phead->next = next;
	free(del);
	del = NULL;
}

LTNode* LTFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}

void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* newnode = LTBuyNode(x);
	newnode->next = pos->next;
	newnode->prev = pos;
	pos->next->prev = newnode;
	pos->next = newnode;
}

void LTErase(LTNode* pos)
{
	assert(pos);
	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;
	free(pos);
	pos = NULL;
}

void LTDestroy(LTNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	LTNode* pcur = (*pphead)->next;
	while (pcur != *pphead)
	{
		LTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	free(*pphead);
	*pphead = NULL;

}
//推荐一级指针->保持接口一致性
void LTDestroy1(LTNode* phead)
{
	assert(phead);
	LTNode* pcur = (phead)->next;
	while (pcur != phead)
	{
		LTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	free(phead);
	phead = NULL;
	//需要手动销毁plist
}