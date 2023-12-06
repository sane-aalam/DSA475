class Solution{
public:
    // Two pointer Algorithm
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int AreYouNonZeroElement = 0;
	    
	    for(int Index = 0; Index < n; Index ++ ){
	        if(arr[Index] != 0){
	            swap(arr[AreYouNonZeroElement], arr[Index]);
	            AreYouNonZeroElement++;
	        }
	    }
	}
};