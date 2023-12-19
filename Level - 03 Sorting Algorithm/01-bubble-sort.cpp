
// Time complexity - 0(n2)
class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n){
       
        // Your code here  
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(arr[i] > arr[j]){
                    // swap(arr[i],arr[j]);
                     // compare two adjacent elements
                     // change > to < to sort in descending order
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        
    }
};