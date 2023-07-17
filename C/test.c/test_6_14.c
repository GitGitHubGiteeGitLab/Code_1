#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	printf("%d\n", 17 / 4);//4...1    / -除法-得到是商
//	printf("%d\n", 17 % 4);//4...1    % -取余/取模 - 得到是余数
//	printf("%.2lf\n", 17.0 / 4);//double
//	printf("%lf\n", 17 / 4.0);//double
//	printf("%lf\n", 17.0 / 4.0);//double
//	//直接写出的浮点数，会被编译器识别为double类型
//
//	printf("%.2f\n", 17.0f / 4);//float
//
//	return 0;
//}
//

//int main()
//{
//	//int a = 0;//初始化
//	////
//	////局部变量不初始化的情况下，里边放的是随机值
//	////
//	//printf("%d\n", a);
//	//a = 100;//赋值
//
//	int a = 0;
//	a = a + 5;
//	a += 5;//+= 复合赋值符
//	a = a - 10;
//	a -= 10;
//	a *= 2;
//	a /= 5;
//
//	return 0;
//}


//C语言中，0表示假，非0表示真

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

//++ 前置++，后置++
//-- 前置--，后置--

//int main()
//{
//	int a = 5;
//	int b = a++;//后置++，口诀：先使用，后+1
//	//int b=a;a=a+1;
//	printf("a=%d b=%d\n", a, b);//6 5
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = ++a;//前置++，口诀：先+1，后使用
//	//a=a+1;b=a
//	printf("a=%d b=%d\n", a, b);//6 6
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = --a;//前置--，口诀：先-1，后使用
//	//a=a-1,b=a
//	printf("a=%d b=%d\n", a, b);//
//
//	return 0;
//}

int main()
{
	int a = 5;
	int b = a--;//后置--，口诀：先使用，后-1
	//b=a,a=a-1
	printf("a=%d b=%d\n", a, b);//

	return 0;
}