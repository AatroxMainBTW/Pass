#pragma once
#include<iostream>

//We supposed to use this algorithm with a sorted table
int rechDichoRecur(int A[], int x, int L, int R) {
	int m = 0;
	if (L > R) {
		return -1;
	}

	m = (L + R) / 2;
	if (A[m] < x) {
		return rechDichoRecur(A, x, m + 1, R);
	}
	else if (A[m] > x)
	{
		return rechDichoRecur(A, x, L, m - 1);
	}
	else
	{
		return m;

	}

}


void showTable(int A[], int n) {
	for (int i = 0; i < n; i++) {
		std::cout << " " << A[i];
	}
}

//Bubble Sort == tri par séléction
void Bubble_sort(int A[], int n) {
	int i, j, tempi = 0;

	for (j = 0; j < n - 1; j++)
	{
		for (i = j + 1; i < n; i++) {
			if (A[i] < A[j]) {
				tempi = A[i];
				A[i] = A[j];
				A[j] = tempi;
			}
		}

	}
}


//Quick-sort == tri-rapide
int Part(int A[], int p, int r) {
	int pivot,i,temp = 0;
	pivot = A[r];
	i = p - 1;
	for (int j = p; j <= r - 1; j++) {
		if (A[j] <= pivot) {
			i++;
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	temp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = temp;
	return i + 1;
}
void quick_sort(int A[], int p, int r) {
	int q = 0;
	if (p < r) {
		q = Part(A, p, r);
		quick_sort(A, p, q - 1);
		quick_sort(A, q + 1, r);
	}
}

