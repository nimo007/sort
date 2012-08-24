/*
 * merge.c
 *
 *  Created on: Aug 4, 2012
 *      Author: rabbit
 */
#include "sort.h"

int merge(int data1[], size_t size1, int data2[], size_t size2, int data[])
{
	int i, j, k;
	int temp[size1 + size2];

	for (i = 0, j = 0, k = 0; (i < size1) && (j < size2); k++) {
		if (data1[i] < data2[j]) {
			temp[k] = data1[i];
			i++;
		} else {
			temp[k] = data2[j];
			j++;
		}
	}

	if (i == size1) {
		while (j < size2) {
			temp[k] = data2[j];
			k++;
			j++;
		}
	}

	if (j == size2) {
		while (i < size1){
			temp[k] = data1[i];
			k++;
			i++;
		}
	}

	for (i = 0; i < k; i++) {
		data[i] = temp[i];
	}

	return 0;
}

int mergesort(int a[], size_t len)
{
	size_t size;

	if (len <= 1)
		return 0;

	size = len / 2;
	mergesort(a, size);
	mergesort(a + size, len - size);
	merge(a, size, a + size, len - size, a);

	return 0;
}

