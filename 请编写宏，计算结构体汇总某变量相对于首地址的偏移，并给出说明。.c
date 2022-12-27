#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>
//请编写宏，计算结构体汇总某变量相对于首地址的偏移，并给出说明。
#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)
//假设结构体的初始地址为0 则成员的地址-初始地址 就是偏移量
struct S
{
	char a;
	int b;
	char c;
};
int main()
{
	struct S s;


	//printf("%d\n", offsetof(struct S, a)); offsetof( structName, memberName ) 计算变量的偏移量
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, b));
	printf("%d\n", OFFSETOF(struct S, c));

	return 0;
}