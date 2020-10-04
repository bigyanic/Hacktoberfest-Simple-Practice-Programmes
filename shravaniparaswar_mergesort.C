#include	<stdio.h>
#define	MAX	10
//shravani
//hacktoberfest
//orignal code
//merge sort implementation
int arr[MAX] = {310, 285, 179, 652, 351, 423, 861, 254, 450, 520};
void	merge (int low, int mid, int high)
{
	int i = low, j = mid + 1, k = 0, temp[MAX];

	while (i <= mid && j <= high)
	{
		if (arr[i] < arr[j])
			temp[k] = arr[i++];
		else
			temp[k] = arr[j++];
		k++;
	}
	while (i <= mid)
	{
		temp[k] = arr[i++];
		k++;
	}
	while (j <= high)
	{
		temp[k] = arr[j++];
		j++;
	}
	i = low;
	j = 0;
	while (j < k)
	{
		arr[i] = temp[j];
		i++;
		j++;
	}
}

void	mergeSort (int low, int high)
{
	int mid ;
	mid = (low + high)/2;
	if (low < high)
	{
		mergeSort (low, mid);
		mergeSort (mid + 1, high);
		merge (low, mid, high);
	}
}

void	displayArr (int n)
{
	int i;

	for (i =0; i < n; i++)
	{
		printf ("%d\t", arr[i]);
	}
}

int	main (void)
{
	mergeSort (0, MAX - 1);
	displayArr (MAX);

}
