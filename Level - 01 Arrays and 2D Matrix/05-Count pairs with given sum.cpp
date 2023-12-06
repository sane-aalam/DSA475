#include <bits/stdc++.h>
using namespace std;

// simple approach - 
// Time complexity - O(n2)

int getPairsCount(int arr[], int n, int K)
{
	// Initialize result
	int count = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] + arr[j] == K)
				count++;

	return count;
}

// reduce the time Complextiy 
// Follow the steps below to solve the given problem: 
// Create a map to store the frequency of each number in the array.
// Check if (K – arr[i]) is present in the map, if present then increment the count variable by its frequency.
// After traversal is over, return the count.
int getPairsCount(int arr[], int n, int K)
{
	unordered_map<int, int> m;
    int countwithHelpFrequcey = 0;
    for (int i = 0; i < n; i++) {
        if (m.find(k - arr[i]) != m.end()) {
            countwithHelpFrequcey += m[k - arr[i]];
        }
        m[arr[i]]++;
    }
    return countwithHelpFrequcey;
}