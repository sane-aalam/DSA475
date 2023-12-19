// Find the index of first 1 in an infinite sorted array of 0s and 1s

// Input : arr[] = {0, 0, 1, 1, 1, 1} 
// Output : 2

// Input : arr[] = {1, 1, 1, 1,, 1, 1}
// Output : 0

//* Algorithm: 
// step-01 set start,end index 
   start = 0;
   end = 1;
// step-02 run the loop until array have 0 value
   start become end 
   end index value,we will increae with double size = end * 2 
// step-03 with help of this process,we will find out the start,end index 
// step-04 Then simple you can appply Binary search Algorithm to find out the 1's one in infinite sorted

    Declare l = 0, h = 1
    while arr[h] == 0
        l = h
    h = 2*h;

binarysearch(arr, l, h) 
