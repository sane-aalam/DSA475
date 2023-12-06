#include<bits/stdc++.h>
using namespace std;



//* When second loop depen on the first loop Then Think about stack 

//* format of this question 
// stack is empty Put -1 
// stack is not emtpy and stack top element is maximum element PUT stackTOP Element
// stack is not emepty and stack top element is not maximum element 
   //conddtion - 1 pop the stack element 
   // until stack is not gonna to empty
   // ya stack top got maximum element


class Solution{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
           
      stack<long long>st;
        vector<long long>v;
        
        for(int i = n - 1; i>= 0; i--){
            // stack is empty Put -1 
            if(st.size() == 0){
                v.push_back(-1);
            // stack is not emtpy and stack top element is maximum element PUT stackTOP Element
            }else if(st.size() > 0 && st.top() > arr[i]){
                v.push_back(st.top());
            // stack is not emepty and stack top element is not maximum element 
           //conddtion - 1 pop the stack element 
           // until stack is not gonna to empty
           // ya stack top got maximum element
            }else if(st.size() > 0 && st.top() <= arr[i]){
                while(st.size() > 0 && st.top() <= arr[i]){
                    st.pop();
                }
                
                // now we have two choice either stack would be empty 
                // either stack top element is greather to the array of element 
                if(st.size() == 0){
                    v.push_back(-1);
                }else if(st.top() > arr[i]){
                    v.push_back(st.top());
                }
            }
        // when all the process done,Then we have to push array element into the stack 
            st.push(arr[i]);
        }
        reverse(v.begin() ,v.end() );
        return v;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}