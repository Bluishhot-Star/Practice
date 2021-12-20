#include <stdio.h>

void showArray(int(*arr)[4]);
void turnArray(int(*arr)[4]);

int main_q31(void) {
	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	printf("\n--------------\n\n");
	printf("1¹ø\n\n");
	showArray2(arr);	
	printf("\n--------------\n\n");
	printf("2¹ø\n\n");
	turnArray2(arr);
	showArray2(arr);
	printf("\n--------------\n\n");
	printf("3¹ø\n\n");
	turnArray2(arr);
	showArray2(arr);
	printf("\n--------------\n\n");
	printf("4¹ø\n\n");
	turnArray2(arr);
	showArray2(arr);
	printf("\n--------------\n\n");
	

	return 0;
}

void showArray(int(*arr)[4]) {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}

void turnArray(int(*arr)[4]) {
	int tempArr[4][4] = {0};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			tempArr[i][j] = arr[i][j];
		}
	}
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[j][3 - i] = tempArr[i][j];
		}
	}
}
