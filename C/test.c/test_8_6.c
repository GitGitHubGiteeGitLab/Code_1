//int main()
//{
//	//&���������Ǻ����ĵ�ַ
//	//������Ҳ�Ǻ����ĵ�ַ
//
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	//int (*pf1)(int, int) = Add;//pf1���Ǻ���ָ�����
//
//	//int (* pf2)(int, int) = &Add;
//	//int ret = (* pf2)(2, 3);
//
//	//int (* pf2)(int, int) = Add;
//	//int ret = pf2(2, 3);
//	//int ret = pf2(2, 3);
//
//	//int ret = Add(2, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//0x0012ff40
//0x0045ff80
//
//int main()
//{
//	//void (*)() ����ָ������
//	//int a = (int)3.14
//	//����Ĵ������ڵ���0��ַ���ĺ������������û�в���������������void
//	//( *(void (*)()) 0 )();
//	//int *p = (int*)0x0012ff40;
//
//	//void (* signal(int , void(*)(int) ) ) (int);
//
//	////void (*)(int) signal(int, void(*)(int));
//	//typedef void (*pfun_t)(int);
//	//pfun_t signal(int, pfun_t);
//
//	return 0;
//}
//
//typedef  unsigned int uint;
//int main()
//{
//	uint a;
//	unsigned int b;
//
//	return 0;
//