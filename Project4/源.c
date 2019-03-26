#define _CRT_SECURE_NO_WANRNINGS
#include<stdio.h>
main()
{
		int x, a, b, c, y;
		printf("输入一个三位整数\n");
		scanf_s("%d", &x);
		a = x % 10;//个位
		b = x / 10 % 10;//十位
		c = x / 100;//百位
		y = c + b * 10 + a * 100;
		printf("%d\n", y);
		
}