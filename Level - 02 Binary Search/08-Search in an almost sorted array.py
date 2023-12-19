
# try to read the code of python 
# its clearly understandable what is gonna here

# Python 3 program to find an element
def binarySearch(arr, l, r, x):

    if (r >= l):
        mid = int(l + (r - l) / 2)
        if (arr[mid] == x):
            return mid
        if (mid > l and arr[mid - 1] == x):
            return (mid - 1)
        if (mid < r and arr[mid + 1] == x):
            return (mid + 1)
 
        if (arr[mid] > x):
            return binarySearch(arr, l, mid - 2, x) #recursive call left portion of the array
        else
        return binarySearch(arr, mid + 2, r, x) #recursive call right portion of the array
 
    # is not present in array
    return -1


# Driver Code
arr = [3, 2, 10, 4, 40]
n = len(arr)
x = 4
result = binarySearch(arr, 0, n - 1, x) # call the function 
if (result == -1):
	print("Element is not present in array")
else:
	print("Element is present at index", result)