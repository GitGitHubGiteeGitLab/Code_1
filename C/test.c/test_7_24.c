#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
void bubble_sort(int* arr, int sz) {
	for (int i = 0; i < sz; i++) {
		for (int j = 0; j < sz - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				arr[j] += arr[j + 1];
				arr[j + 1] = arr[j] - arr[j + 1];
				arr[j] -= arr[j + 1];
			}
		}
	}
	return;
}

int main() {
	int arr[] = {90, 432, 45465, 545, 32424, 3452435, 1, 445, 54, 87};
	bubble_sort(arr, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

int main1() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%p\n", &arr[i]);
	}
	return 0;
}