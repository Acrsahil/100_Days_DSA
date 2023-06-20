//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
		
bool key(int arr[],int n, int x){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    
    while(s<=e){
        if(x == arr[mid]){
            return true;
        }
        else if(x<arr[mid]){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}
		
		
 int first(int arr[],int n, int x){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = 0;

    while(s<=e){
        if(arr[mid]==x){
            ans = mid;
            e = mid-1;
        }
        else if(x>arr[mid]){
            s = mid +1;
        }
        else if(x<arr[mid]){
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
 int last(int arr[],int n, int x){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = 0;

    while(s<=e){
        if(arr[mid]==x){
            ans = mid;
            s = mid+1;
        }
        else if(x>arr[mid]){
            s = mid +1;
        }
        else if(x<arr[mid]){
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

	int count(int arr[], int n, int x) {
	    if(key(arr,n,x)){
	    int first1 = first(arr,n,x);
	    int last1 = last(arr,n,x);
	    int ans = (last1-first1)+1;
	    return ans;
	    }else{
	        return 0;
	    }
	   
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
