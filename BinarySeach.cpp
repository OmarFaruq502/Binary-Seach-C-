/*
Binary Search

Name: Omar Faruq

Date: 4/12/2019

Subject: Implement Binary Search
*/

#include<iostream>

using namespace std;

int binarySearch(int arr[], int m, int key) {

	int start = 0;
	int end = m - 1;

	while (start <= end)
	{
		int mid = ((start + end) / 2);

		if (arr[mid] ==  key)
		{
			return mid;
		}
		else if(arr[mid] < key)
		{
			start = mid + 1;
 
		}
		else if (arr[mid] > key)
		{
			end = mid - 1;
		}
	}
}

int main() {
	
	int m[7] = {1, 2, 4, 5, 7, 8 , 20};
	
	int key;

	cout << "Resultant array: ";
	for (int i = 0; i < 7; i++)
	{
		cout << m[i] << " ";
	}
	cout << endl;


	cout << "Enter a value to search: ";
	cin >> key;

	cout << "Key found at " << binarySearch(m, 7, key) << " index" << endl;
	

	cout << endl;
	system("pause");
	return 0;
}