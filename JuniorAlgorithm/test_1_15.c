void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;
	}

	int gap = 1;
	while (gap < n)
	{
		printf("gap:%2d->", gap);
		for (size_t i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			// [begin1, end1][begin2, end2] 归并
			//printf("[%2d,%2d][%2d, %2d] ", begin1, end1, begin2, end2);

			// 边界的处理
			if (end1 >= n || begin2 >= n)
			{
				break;
			}

			if (end2 >= n)
			{
				end2 = n - 1;
			}

			//printf("[%2d,%2d][%2d, %2d] ", begin1, end1, begin2, end2);

			int j = begin1;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}

			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}

			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}

			memcpy(a + i, tmp + i, sizeof(int) * (end2-i+1));
		}

		printf("\n");

		gap *= 2;
	}


	free(tmp);
}

// 基数排序/桶排序

// 计数排序
// 时间：O(N+range)
// 空间：O(range)
void CountSort(int* a, int n)
{
	int min = a[0], max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];

		if (a[i] > max)
			max = a[i];
	}

	int range = max - min + 1;
	int* count = (int*)calloc(range, sizeof(int));
	if (count == NULL)
	{
		printf("calloc fail\n");
		return;
	}

	// 统计次数
	for (int i = 0; i < n; i++)
	{
		count[a[i] - min]++;
	}

	// 排序
	int i = 0;
	for (int j = 0; j < range; j++)
	{
		while (count[j]--)
		{
			a[i++] = j + min;
		}
	}
}