
#include <bits/stdc++.h>
using namespace std;

//* Search in an almost sorted array (Nearly) 
// bruthforce using loop 0(n)
// case-1 if(arr[i] == key) 
// case-2 if(arr[i-1] == key)
// case-3 if(arr[i+1] == key)

// we have to apply binary search using MIDDLE index value

int binarySearch(int arr[], int l, int r, int x){

	int start = l;
	int end = r;
	int target = x;

	// calculate middle value using Optimization format
	int mid = start + (end - start)/2;

	while(start <= end){
		if(arr[mid] == key){
			return mid;
		else if(arr[mid-1] == key){
			return mid-1;
		}else if(arr[mid+1] == key){
			return mid+1;
		}
		}else if(arr[mid] < key){
			// increae with help 2 index value
			start = mid + 2;
		}else{
			//  same with decrese with 2 index value
			end = mid - 2;
		}
	   // update the middle index value
	   mid = start + (end - start)/2;
	}
	return -1;
}

// main function in c++
int main(void){

	int arr[] = { 3, 2, 10, 4, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 4;
	int result = binarySearch(arr, 0, n - 1, x); // call the function 
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
