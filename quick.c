/*
 * quick.c
 *
 *  Created on: Aug 4, 2012
 *      Author: rabbit
 */
#include "sort.h"

int quick(int a[], int len)
{
	int i, j;
	int flag = 0;

	i = 0;
	j = len - 1;

	if (len <= 1)
		return 0;

	while (i != j) {
		if (a[i] > a[j]) {
			SWAP(a[i], a[j]);
			flag = 1 - flag;
		}
		flag == 0 ? j-- : i++;
	}

	quick(a, i);
	quick(a + i + 1, len - i - 1);

	return 0;
}

