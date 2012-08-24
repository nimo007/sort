#include "sort.h"

int bubble(int a[], int len)
{
	int i, j;

	for (i = 1; i < len; i++) {
		for (j = 0; j < len - i; j++) {
			if (a[j] > a[j + 1])
				SWAP(a[j], a[j + 1]);
		}
	}
	return 0;
}
