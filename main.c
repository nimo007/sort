/*
 * main.c
 *
 *  Created on: Aug 4, 2012
 *      Author: rabbit
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"

int main()
{
	int a[LEN];
	int i;

	srandom(time(NULL));

	for (i = 0; i < LEN; i++)
	{
		a[i] = random() % 100;
		printf("%4d", a[i]);
	}
	putchar('\n');

//	bubble(a, LEN);
//	for (i = 0; i < LEN; i++)
//	{
//		printf("%4d", a[i]);
//	}
//	putchar('\n');

//	quick(a, LEN);
//	for (i = 0; i < LEN; i++)
//	{
//		printf("%4d", a[i]);
//	}
//	putchar('\n');

//	mergesort(a, LEN);
//	for (i = 0; i < LEN; i++)
//	{
//		printf("%4d", a[i]);
//	}
//	putchar('\n');

	straight_insert(a, LEN);
	for (i = 0; i < LEN; i++)
	{
		printf("%4d", a[i]);
	}
	putchar('\n');

//	shell(a, LEN);
//	for (i = 0; i < LEN; i++)
//	{
//		printf("%4d", a[i]);
//	}
//	putchar('\n');

//	bin_insert_sort(a, LEN);
//	for (i = 0; i < LEN; i++)
//	{
//		printf("%4d", a[i]);
//	}
//	putchar('\n');

	return 0;
}
