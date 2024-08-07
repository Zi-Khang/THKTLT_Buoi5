#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <conio.h>
#include <ctime>

#define MAX 1000

void nhapMang(int arr[], int &n)
{
	srand((unsigned int)time(NULL));;
	printf("Hay nhap n: ");
	scanf("%d", &n);

	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand();
		}
	}
}

void xuatMang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = %d\n", i, arr[i]);
	}
}

int tongChan(int arr[], int n)
{
	if (n == -1)
		return 0;
	if (arr[n] % 2 == 0)
		return arr[n] + tongChan(arr, n-1);
	return tongChan(arr, n - 1);
}
int main()
{
	//Bai1
	int myArray[MAX];
	int nSize;
	nhapMang(myArray, nSize);
	xuatMang(myArray, nSize);
	printf("\nTong chan: %d", tongChan(myArray, nSize-1));

	getch();
}
