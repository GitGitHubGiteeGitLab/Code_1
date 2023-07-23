#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define MAX_N 50


//���n��쳲�������
int Fibonacci(int n) {
	if (n == 1)return 1;
	if (n == 2)return 1;
	int a, b;
	a = b = 1;
	while (n-- >= 3) {
		b += a;
		a = b - a;
	}
	return b;
}

int main5() {
	int n;
	while(~scanf("%d", &n))printf("%d", Fibonacci(n));
	return 0;
}

//���n��쳲�������
int Fibonacci1(int n) {
	if (n == 1)return 1;
	if (n == 2)return 1;
	return Fibonacci(n - 1) + Fibonacci1(n - 2);
}

int main4() {
	int n;
	while (~scanf("%d", &n))printf("%d", Fibonacci(n));
	return 0;
}

//strlen
size_t mstrlen(char* str) {
	int cnt = 0;
	while (*str) {
		cnt++;
		str++;
	}
	return cnt;
}


int main3() {
	char str[MAX_N];
	scanf("%s", str);
	printf("%zd\n", mstrlen(str));
	return 0;
}


//strlen recursion
size_t mstrlen1(char* str) {
	if (!(*str))return 0;
	//++str���մ󣬻���str����
	return 1 + mstrlen(str + 1);//strû��
}

int main2() {
	char str[MAX_N];
	scanf("%s", str);
	size_t len = mstrlen(str);
	printf("%zd\n", len);
	return 0;
}
//����һ���޷������ͣ�����˳���ӡ����ÿһλ
void print(int n) {
	if (n < 10) { 
		printf("%d ", n); 
		return; 
	}
	print(n / 10);
	printf("%d ", n % 10);
	return;
}

int main1() {
	int n;
	scanf("%d", &n);
	print(n);
}