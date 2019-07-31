// A O(n^2) C++ program to count inversions of size 3 
#include<bits/stdc++.h> 
using namespace std; 

// Returns count of inversions of size 3 
int maxInversion(int arr[], int n) 
{ 
	int invcount = 0; // Initialize result 

	for (int i=1; i<n-1; i++) 
	{ 
		// Count all smaller elements on right of arr[i] 
		int small = 0; 
		for (int j=i+1; j<n; j++) 
			if (arr[i] > arr[j]) 
				small++; 

		// Count all greater elements on left of arr[i] 
		int great = 0; 
		for (int j=i-1; j>=0; j--) 
			if (arr[i] < arr[j]) 
				great++; 

		// Update inversion count by adding all inversions 
		// that have arr[i] as middle of three elements 
		invcount += great*small; 
	} 

	return invcount; 
} 

// Driver program to test above function 
int main() 
{ 
	unsigned int price_count;
	cin>>price_count;
	int* array = new int[price_count];
	for(int i=0;i<price_count;i++)
	{
		cin>>array[i];
	}
 
	cout << maxInversion(array, price_count); 
	return 0; 
} 
