#include <iostream>
#include <vector>

using namespace std;

void mergeSort(std::vector<int>&, int, int);
void merge(std::vector<int>&, int, int, int);
int main()
{
	std::vector<int> a{ 10, 9, 7, 101, 23, 44, 12, 78, 34, 23 };

	mergeSort(a, 0, 9);

	cout << "printing the sorted elements" << endl;

	for (unsigned int i = 0; i < a.size(); i++)
	{
		cout << a[i] << endl;
	}

	return 0;
}

void mergeSort(std::vector<int>& a, int beg, int end)
{
	if (beg < end)
	{
		int mid = (beg + end) / 2;
		mergeSort(a, beg, mid);
		mergeSort(a, mid + 1, end);
		merge(a, beg, mid, end);
	}
}

void merge(std::vector<int>& a, int beg, int mid, int end)
{
	int i = beg, j = mid + 1, k, index = beg;
	std::vector<int> temp(10, 0);

	while (i <= mid && j <= end)
	{
		if (a[i] < a[j])
		{
			temp[index] = a[i];
			i = i + 1;
		}
		else
		{
			temp[index] = a[j];
			j = j + 1;
		}
		index++;
	}
	if (i > mid)
	{
		while (j <= end)
		{
			temp[index] = a[j];
			index++;
			j++;
		}
	}
	else
	{
		while (i <= mid)
		{
			temp[index] = a[i];
			index++;
			i++;
		}
	}
	k = beg;
	while (k < index)
	{
		a[k] = temp[k];
		k++;
	}
}
