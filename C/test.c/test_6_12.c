#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ö�ٳ���
//ö�� - һһ�о�
//��ԭɫ����ɫ ��ɫ ��ɫ
//�Ա��С�Ů������
//���ڣ�1 2 3 4 5 6 7
//

//�Զ��������
//enum Color
//{
//	//ö�ٳ���
//	RED,   //0
//	GREEN, //1
//	BLUE   //2
//};
//
//int main()
//{
//	enum Color c = RED;
//
//	return 0;
//}

//enum��ö�ٵĹؼ���

//enum Sex
//{
//	MALE=7,
//	FEMALE,
//	SECRET
//};


//int main()
//{
//	printf("abc\ndef");
//	return 0;
//}
//%d - ʮ���Ƶ���ʽ��ӡ����
//%s - ��ӡ�ַ���
//

//int main()
//{
//	printf("c:\\code\\test111\\tets.c");
//
//	return 0;
//}

//int main()
//{
//	printf("(are you ok??)");//(are you ok]
//	printf("(are you ok\?\?)");
//	//??) -- ]
//	//??( -- [
//	//����ĸ��
//	return 0;
//}

//%d
//%s
//%c - ��ӡ�ַ�
//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 'b');
//	printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()
//{
//	printf("abc\bdef\n"); 
//	return 0;
//}
//
//int main()
//{
//	printf("%c\n", '\130');
//	printf("%c\n", '\151');
//	printf("%c\n", '\x61');
//
//	return 0;
//}
//#include <string.h>
//
//int main()
//{
//	//printf("%d\n", strlen("abc"));//
//	printf("%d\n", strlen("c:\test\111\test.c"));//13
//	printf("%d\n", strlen("c:\test\181\test.c"));
//	return 0;
//}
//


//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("�����ú�ѧϰ��(1/0):");
//	scanf("%d", &input);//1 / 0 
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}
//


int main()
{
	int line = 0;

	while (line<30000)
	{
		if (line == 1000)
		{
			printf("������\n");
			break;
		}
		printf("�ô���:%d\n", line);
		line++;
	}
	//
	if(line == 30000)
		printf("��offer\n");

	return 0;
}


//��������
int Add(int x, int y);
////�����Ķ���
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}