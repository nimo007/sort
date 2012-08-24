/*
 * bin_insert_sort.c
 *
 *  Created on: Aug 4, 2012
 *      Author: rabbit
 */

#include "sort.h"

static int bin_search(int a[], int len, int x)
{
	int l, h, m;

	l = 0;
	h = len - 1;

	while (l <= h) {
		m = (l + h) / 2;
		if (x < a[m])
			h = m - 1;
		else
			l = m + 1;
	}

	return l;
}

int bin_insert_sort(int a[], int len)
{
	int l;
	int i, j;
	int x;

	for (i = 1; i < len; ++i) {
//		l = 0;
//		h = i - 1;
		x = a[i];
//
//		while (l <= h) {
//			m = (l + h) / 2;
//			if (x < a[m])
//				h = m - 1;
//			else
//				l = m + 1;
//		}
		l = bin_search(a, i, a[i]);

		for (j = i - 1; j >= l; --j) {
			a[j+1] = a[j];
		}
		a[l] = x;
	}

	return 0;
}

