#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct Stu
//{
//	//ѧ�����������
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[12];
//} s3, s4;
//s3��s4�ǽṹ�����͵ı���
//s3��s4��ȫ�ֵ�


//typedef struct Stu
//{
//	//ѧ�����������
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[12];
//}Stu;//Stu ���������������µ�����

//
//int main()
//{
//	struct Stu s1;
//	struct Stu s2;
//	Stu s5;
//
//	//s1��s2�ǽṹ�����͵ı����� �Ǿֲ�����
//
//	return 0;
//}
//
//struct B
//{
//	char c;
//	int i;
//};
//
//struct S
//{
//	char c;
//	int num;
//	int arr[10];
//	double* pd;
//	struct B sb;
//	struct B* pb;
//}s1;//s1��ȫ�ֱ���
//
//struct S s2;//s2��ȫ�ֱ���
//
//int main()
//{
//	double d = 3.14;
//	//����˳���ʼ��
//	struct S s3 = { 'q', 100, {1,2,3}, &d, {'a', 99}, NULL };//�ֲ�����
//	//ָ����Ա����ʼ��
//	struct S s4 = { .num = 1000, .arr = {1,2,3,4,5} };//�ֲ�����
//
//
//
//	return 0;
//}

#include <string.h>

struct S
{
	char name[20];
	int age;
};

//void set_s(struct S t)
//{
//	t.age = 18;
//	//t.name = "zhangsan";//err, ��Ϊname�����������������ǳ����ĵ�ַ
//	strcpy(t.name, "zhangsan");//�ַ�������
//}

//void set_s(struct S* ps)
//{
//	(*ps).age = 18;
//	//t.name = "zhangsan";//err, ��Ϊname�����������������ǳ����ĵ�ַ
//	strcpy((*ps).name, "zhangsan");//�ַ�������
//}

//
//void set_s(struct S* ps)
//{
//	ps->age = 18;
//	//t.name = "zhangsan";//err, ��Ϊname�����������������ǳ����ĵ�ַ
//	strcpy(ps->name, "zhangsan");//�ַ�������
//}
//
//void print_s(struct S* ps)
//{
//	printf("%s %d\n", ps->name, ps->age);
//}
//
//int main()
//{
//	struct S s = {0};
//	//дһ��������s�д������
//	set_s(&s);
//
//	//дһ��������ӡs�е�����
//	print_s(&s);
//
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int i = 0;
//	test();
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = -1;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//void test2()
//{
//	printf("test2\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);//3
//	//1!+2!+3! = 1 + 2+ 6= 9
//
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	
//	return 0;
//}
//

//ǰ�᣺
//VS �ϣ�X86��debugģʽ����֤�ͽ����
//

#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	/*for (i = 0; i <=12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}*/
	printf("%p\n", &i);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[9]);

	return 0;
}

