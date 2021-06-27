#include <bits/stdc++.h>

// `M × N` matrix
#define M 5
#define N 4
using namespace std;
// Dynamically allocate memory for 2D Array in C++
int main()
{
	// dynamically allocate memory of size `M × N`
	int* A = new int[M * N];

	// assign values to the allocated memory
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++) {
			*(A + i*N + j) = rand() % 100;
		}
	}

	// print the 2D array
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++) {
			cout << *(A + i*N + j) << " ";		// or (A + i*N)[j])
		}
	cout << endl;
	}

	// deallocate memory
	delete[] A;

	return 0;
}