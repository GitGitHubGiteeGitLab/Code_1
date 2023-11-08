#include"List.h"



LTNode* CreateLTNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	newnode->val = x;
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;
}

LTNode* LTInit()
{
	LTNode* phead = CreateLTNode(-1);
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

void LTPrint(LTNode* phead)
{
	assert(phead);
	printf("ڱλ");

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d<=>", cur->val);
		cur = cur->next;
	}
}

void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);

	LTNode* tail = phead->prev;
	LTNode* newnode = CreateLTNode(x);

	// phead               tail  newnode
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}

void LTPopBack(LTNode* phead)
{
	assert(phead);

	// 
	assert(phead->next != phead);

	LTNode* tail = phead->prev;
	LTNode* tailPrev = tail->prev;

	free(tail);
	tailPrev->next = phead;
	phead->prev = tailPrev;
}