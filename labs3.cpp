﻿// labs3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	printf("Write 5 numbers: ");
	int arr[5];
	for (int i = 0; i<5; i++) {
		scanf_s("%d", &arr[i]);
	}

	int b[10];
	int k = 0;
		for(int i = 0; i < 10; i++) {
			if((i%2)==0)
			b[i] = arr[k] - 1;
			else { b[i] = 1; k++; }
			
		}
	
		for (int i = 0; i < 10; i++) {
			
			printf("%d ", b[i]);
		}
		int max = b[0];
		int min = b[0];
		for (int i = 0; i < 10; i++) {
			if (max < b[i]) {
				max = b[i];
			}
			if (min > b[i]) {
				min = b[i];
			}
		
		}

		printf("\nmax is %d, min is %d\n", max, min);
	
	system("pause");
	return 0;
}

