/*
 * shell.c
 *
 *  Created on: Aug 4, 2012
 *      Author: rabbit
 */

#include "sort.h"

int shell(int a[], int len)
{
	int gap;
//	int x;
	int i, j;
	gap = len;

	while (gap /= 2) {
		for (i = gap; i < len; i++) {
			for (j = i; j >= gap; j -= gap) {
				if (a[j] < a[j - gap]) {
					SWAP(a[j], a[j - gap]);
				}
			}
		}
	}
	return 0;
}


//			x = a[i];
//					while (x < a[j - gap]) {
//						a[j] = a[j - gap];
//						j -= gap;
//					}
//					a[j] = x;
