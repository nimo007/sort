/*
 * insert.c
 *
 *  Created on: Aug 4, 2012
 *      Author: rabbit
 */
#include "sort.h"

/*
 * 直接插入排序，在已排好序的数组中插入一个元素
 *
 *
 *
 *
 */

int straight_insert(int a[], int len)
{
	int i, j;
	int x;

	//插入的最大次数
	for (i = 1; i < len; i++) {
		x = a[i];
//		for (j = i; j >= 0; j--) {
//			if (a[i] < a[j-1]) {
//				while (x < a[j-1] ) {
//					a[j] = a[j -1];
//					j--;
//				}
//				a[j] = x;
//			}
//		}

		if (a[i] < a[i - 1]) {
			for (j = i; (j >= 0) && (x < a[j - 1]); j--){
				a[j] = a[j - 1];
			}
			a[j] = x;
		}
	}

	return 0;
}
