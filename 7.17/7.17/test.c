#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < sz-1; i++)
	{
		for (j = 0; j < sz-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int i = 0;
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}