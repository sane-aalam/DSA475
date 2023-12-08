// bruthforce 
 vector<int> findTwoElement(vector<int> arr, int n) {      
        sort(arr.begin(), arr.end());
        vector<int>v;
        
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
             v.push_back(arr[i]); 
             break;
            }
        }
        
        int sum1=0,sum2=0;
        for(int i=1;i<=n;i++)
        {
            sum1=sum1+i;
        }
        for(int i=0;i<n;i++)
        {
            sum2=sum2+arr[i];
        }
        int miss=  v[0]-(sum2-sum1) ;
        v.push_back(miss);
        return v;
}

// optimization 
#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {

// Mathmathically approach - o(1) space complextiy
// ( sum of alll the number - sum of all 1-N number ) MATH MATHICALLY Eqaution Used to solve
    
 // Find Sn and S2n:
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;
    
    long long  S = 0;
    long long  S2 = 0;
    
    for(int i = 0; i<n; i++){
        S += arr[i];
        S2 += (long long) (arr[i]) * (long long) (arr[i]);
    }
    
     //S-Sn = X-Y:
    long long val1 = S - SN;

    // S2-S2n = X^2-Y^2:
    long long val2 = S2 - S2N;

    //Find X+Y = (X^2-Y^2)/(X-Y):
    val2 = val2 / val1;

    //Find X and Y: X = ((X+Y)+(X-Y))/2 and Y = X-(X-Y),
    // Here, X-Y = val1 and X+Y = val2:
    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}