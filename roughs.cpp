         int firstindex(int arr[],int n,int x){
        int s=0,e=n-1,ans1=0;
        int mid1=(s+e)/2;
        while(s<=e){
            if(arr[mid1]==x){
                ans1=mid1;
                e=mid1-1;
            }
            else if(arr[mid1]>x){
                e=mid1-1;
            }
            else{
                s=mid1+1;
            }
             mid1=(s+e)/2;
        }
        return ans1;
    }
     int lastindex(int arr[],int n,int x){
        int s=0,e=n-1,ans2=-1;
        int mid2=(s+e)/2;
        while(s<=e){
            if(arr[mid2]==x){
                ans2=mid2;
                s=mid2+1;
            }
            else if(arr[mid2]>x){
                e=mid2-1;
            }
            else{
                s=mid2+1;
            }
             mid2=(s+e)/2;
        }
        return ans2;
    }
/* if x is present in arr[] then returns the count
of occurrences of x, otherwise returns 0. */
int count(int arr[], int n, int x) {
    // code here
    int count=0;
    count=(lastindex(arr,n,x)-firstindex(arr,n,x))+1;
    return count;
}