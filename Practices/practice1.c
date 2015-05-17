#include <stdio.h>
#include "practice1.h"

//#define COUNT_MAX 10
//
//int forFunc(int countMax);
//int whileFunc(int countMax);

void practice1()
{
	printf("Hello World!\n");
	/*
	・課題１
		int iを宣言し、iが10になるまでインクリメントするループを書きなさい。
		for文とwhile文の両方を書くこと。
		途中経過をprint文で表示しても可
	*/
	int i = 1;
	for (i; i <= COUNT_MAX; i++)
	{
		printf("for [%d]\n", i);
	}

	i = 1;
	while (i <= COUNT_MAX)
	{
		printf("while [%d]\n", i);
		i++;
	}

	forFunc(COUNT_MAX);
	whileFunc(COUNT_MAX);
}

/*
	・課題２
	課題１の機能を関数化しなさい
	引数は課題１で10としていた所を引数にし、指定した数をreturnで返す事
	作成した関数をmain文から呼びなさい。
*/
int forFunc(int countMax)
{
	int i = 1;
	for (i; i <= countMax; i++)
	{
		printf("forFunc [%d]\n", i);
	}
	return i;
}

int whileFunc(int countMax)
{
	int i = 1;
	while (i <= countMax)
	{
		printf("whileFunc [%d]\n", i);
		i++;
	}
	return i;
}
