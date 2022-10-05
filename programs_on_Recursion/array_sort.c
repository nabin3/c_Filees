		// write a recursion function to short an array
#include<stdio.h>

int main()
{
	void sort_array(int [], int);
	int size, i;
	printf("Enter size of array :");
	scanf("%d", &size);
	int arr[size];
	for(i = 0; i < size; i++)
	{
		printf("Enter %d_th number\n", i + 1);
		scanf("%d", &arr[i]);	
	}
	printf("after sorting in assending order the array will look like this ");
	sort_array(arr, size);
	for(i = 0; i < size; i++)
		printf(" %d", arr[i]);
	printf("\n");
	return(0);
}

void sort_array(int arr[], int size)
{
	int max(int [], int);
	int temp, maxIndex;
	if(size > 1){
 	maxIndex = max(arr, size);
	temp = arr[size - 1];
	arr[size - 1] = arr[maxIndex];
	arr[maxIndex] = temp;
	sort_array(arr, size - 1);
	}
}

int max(int arr[], int size)
{
	int m = 0, i;
	for(i = 0; i < size; i++)
		if(arr[m] < arr[i])
			m = i;
	return(m);
}
