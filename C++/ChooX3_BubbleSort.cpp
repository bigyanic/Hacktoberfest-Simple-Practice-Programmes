#include <iostream>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> value_list;

	int input_limit;
	cout << "Enter limit:";

	cin >> input_limit;
	cout << "Enter the elements:" << endl;

	for (auto index = 0; index < input_limit; index++)
	{
		int input_value;
		cin >> input_value;
		value_list.push_back(input_value);
	}

	for (auto search_index1 = 0; search_index1 < input_limit; search_index1++)
	{
		for (auto search_index2 = 0; search_index2 < input_limit - search_index1 - 1; search_index2++)
		{
			if (value_list[search_index2] > value_list[search_index2 + 1])
			{
				auto temp = value_list[search_index2];
				value_list[search_index2] = value_list[search_index2 + 1];
				value_list[search_index2 + 1] = temp;
			}
		}
	}

	cout << "\nThe elements after sorting:\n";
	for (auto index = 0; index < input_limit; index++)
		cout << value_list[index] << " ";

	return 0;
}
