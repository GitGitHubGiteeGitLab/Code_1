#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	printf("%d\n", 17 / 4);//4...1    / -����-�õ�����
//	printf("%d\n", 17 % 4);//4...1    % -ȡ��/ȡģ - �õ�������
//	printf("%.2lf\n", 17.0 / 4);//double
//	printf("%lf\n", 17 / 4.0);//double
//	printf("%lf\n", 17.0 / 4.0);//double
//	//ֱ��д���ĸ��������ᱻ������ʶ��Ϊdouble����
//
//	printf("%.2f\n", 17.0f / 4);//float
//
//	return 0;
//}
//

//int main()
//{
//	//int a = 0;//��ʼ��
//	////
//	////�ֲ���������ʼ��������£���߷ŵ������ֵ
//	////
//	//printf("%d\n", a);
//	//a = 100;//��ֵ
//
//	int a = 0;
//	a = a + 5;
//	a += 5;//+= ���ϸ�ֵ��
//	a = a - 10;
//	a -= 10;
//	a *= 2;
//	a /= 5;
//
//	return 0;
//}


//C�����У�0��ʾ�٣���0��ʾ��

//int main()
//{
//	int a = 0;
//	int b = !a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	if (a)
//		printf("hehe\n");
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	if (!a)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	int a = -4;
//	printf("%d\n", a);
//	printf("%d\n", +a);
//
//	printf("%d\n", -a);
//
//
//	return 0;
//}
//


//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	return 0;
//}

//++ ǰ��++������++
//-- ǰ��--������--

//int main()
//{
//	int a = 5;
//	int b = a++;//����++���ھ�����ʹ�ã���+1
//	//int b=a;a=a+1;
//	printf("a=%d b=%d\n", a, b);//6 5
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = ++a;//ǰ��++���ھ�����+1����ʹ��
//	//a=a+1;b=a
//	printf("a=%d b=%d\n", a, b);//6 6
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = --a;//ǰ��--���ھ�����-1����ʹ��
//	//a=a-1,b=a
//	printf("a=%d b=%d\n", a, b);//
//
//	return 0;
//}

int main()
{
	int a = 5;
	int b = a--;//����--���ھ�����ʹ�ã���-1
	//b=a,a=a-1
	printf("a=%d b=%d\n", a, b);//

	return 0;
}