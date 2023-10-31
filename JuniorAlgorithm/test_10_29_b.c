#include"SList.h"

void SLTPrint(SLNode* phead)
{
	SLNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
}

SLNode* CreateNode(SLNDataType x)
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	newnode->val = x;
	newnode->next = NULL;
	return newnode;
}

void SLTPushBack(SLNode* phead, SLNDataType x)
{
	SLNode* newnode = CreateNode(x);

	if (phead == NULL)
	{
		phead = newnode;
	}
	else
	{
		// β
		SLNode* tail = phead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}	
}

void SLTPushFront(SLNode* phead, SLNDataType x);