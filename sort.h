/*
 * main.h
 *
 *  Created on: Aug 4, 2012
 *      Author: rabbit
 */

#include <stdio.h>

#pragma once

#define SWAP(a, b) do {\
						typeof(a) temp;\
						temp = (a);\
						(a) = (b);\
						(b) = temp;\
					} while(0)

#define ARRAYSIZE(arr) (sizeof(arr) / sizeof((arr)[0]))
#define LEN 10

int bubble(int a[], int);
int quick(int a[], int);
int merge(int data1[], size_t size1, int data2[], size_t size2, int data[]);
int mergesort(int a[], size_t len);
int straight_insert(int a[], int len);
int shell(int a[], int len);
int bin_insert_sort(int a[], int len);
