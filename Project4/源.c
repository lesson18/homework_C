#define _CRT_SECURE_NO_WANRNINGS
#include<stdio.h>
main()
{
		int x, a, b, c, y;
		printf("����һ����λ����\n");
		scanf_s("%d", &x);
		a = x % 10;//��λ
		b = x / 10 % 10;//ʮλ
		c = x / 100;//��λ
		y = c + b * 10 + a * 100;
		printf("%d\n", y);
		
}