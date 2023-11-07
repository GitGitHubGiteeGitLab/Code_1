void SLTInsertAfter(SLNode* pos, SLNDataType x)
{
	assert(pos);
	SLNode* newnode = CreateNode(x);

	newnode->next = pos->next;
	pos->next = newnode;
}

void SLTEraseAfter(SLNode* pos)
{
	assert(pos);
	assert(pos->next);

	SLNode* tmp = pos->next;
	pos->next = pos->next->next;

	free(tmp);
	tmp = NULL;
}

void SLTDestroy(SLNode** pphead)
{
	assert(pphead);

	SLNode* cur = *pphead;
	while (cur)
	{
		SLNode* next = cur->next;
		free(cur);
		cur = next;
	}

	*pphead = NULL;
}