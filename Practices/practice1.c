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
	�E�ۑ�P
		int i��錾���Ai��10�ɂȂ�܂ŃC���N�������g���郋�[�v�������Ȃ����B
		for����while���̗������������ƁB
		�r���o�߂�print���ŕ\�����Ă���
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
	�E�ۑ�Q
	�ۑ�P�̋@�\���֐������Ȃ���
	�����͉ۑ�P��10�Ƃ��Ă������������ɂ��A�w�肵������return�ŕԂ���
	�쐬�����֐���main������ĂтȂ����B
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
