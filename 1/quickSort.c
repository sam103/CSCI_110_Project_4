#include<stdio.h>
#include<stdlib.h>
#include<cstringt.h>
#include<time.h>

void quickSort(int a[], int right, int left);
void swap(int a[], int x, int y);
void fprintArray(FILE *out, int a[], int n);

int main(void) {
	srand(time(NULL));
	FILE
		*out;
	char 
		outFilename[] = "quickSortOutput.txt";
	int
		i, x[50];

	out = fopen(outFilename, "w");
	if (out == NULL) {
		fprintf(stderr, "Can't open output file %s!\n", outFilename);
		exit(1);
	}

	for (i = 0; i < 50; i++) {
		x[i] = rand() % 100;
	}

	quickSort(x, 0, 49);
	fprintArray(out, x, 50);

	fclose(out);
	return 0;
}

void quickSort(int a[], int leftBound, int rightBound) {
	int
		rightPoint, leftPoint, pivot, pivotValue;
	pivot = leftBound;
	leftPoint = leftBound;
	rightPoint = rightBound;
	pivotValue = a[pivot];

	if (leftBound >= rightBound) return;
	while (leftPoint < rightPoint) {
		while ((a[leftPoint] <= pivotValue)
				&& (leftPoint < rightPoint)) {
			++leftPoint;
		}
		while (a[rightPoint] > pivotValue) {
			--rightPoint;
		}
		if (leftPoint < rightPoint) {
			swap(a, leftPoint, rightPoint);
		}
	}

	a[leftBound] = a[rightPoint];
	a[rightPoint] = pivotValue;

	quickSort(a, leftBound, rightPoint - 1);
	quickSort(a, rightPoint + 1, rightBound);
}

void swap(int a[], int x, int y) {
	int temp;
	temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}

void fprintArray(FILE *out, int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		if (i % 10 == 0) fprintf(out, "\n");
		fprintf(out, "%3d", a[i]);
	}
	fprintf(out, "\n");
}