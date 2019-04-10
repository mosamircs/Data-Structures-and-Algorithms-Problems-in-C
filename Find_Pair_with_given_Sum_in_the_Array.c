#include <stdio.h>
/**Find Pair with given Sum in the Array
Given an unsorted array of integers,
find a pair with given sum in it.
The idea is to sort the given array in ascending order and maintain
search space by maintaining two indices (low and high) that initially
points to two end-points of the array.
Then we loop till low is less than high index and reduce search space
**/
// Naive method to find a pair in an array with given sum
void findPair(int arr[], int n, int sum)
{
	// consider each element except last element
	for (int i = 0; i < n - 1; i++)
	{
		// start from i'th element till last element
		for (int j = i + 1; j < n; j++)
		{
			// if desired sum is found, print it and return
			if (arr[i] + arr[j] == sum)
			{
				printf("Pair found at index %d and %d", i, j);
				return;
			}
		}
	}
	// No pair with given sum exists in the array
	printf("Pair not found");
}

// main function
int main()
{
	int arr[] = { 8, 7, 2, 5, 3, 1 };
	int sum = 10;

	int n = sizeof(arr)/sizeof(arr[0]);

	findPair(arr, n, sum);

	return 0;
}
