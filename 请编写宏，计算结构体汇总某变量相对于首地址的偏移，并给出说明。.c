#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>
//���д�꣬����ṹ�����ĳ����������׵�ַ��ƫ�ƣ�������˵����
#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)
//����ṹ��ĳ�ʼ��ַΪ0 ���Ա�ĵ�ַ-��ʼ��ַ ����ƫ����
struct S
{
	char a;
	int b;
	char c;
};
int main()
{
	struct S s;


	//printf("%d\n", offsetof(struct S, a)); offsetof( structName, memberName ) ���������ƫ����
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, b));
	printf("%d\n", OFFSETOF(struct S, c));

	return 0;
}