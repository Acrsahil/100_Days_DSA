int occurance(int arr[],int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans;

    while(s<=e){ // {1,2,4,5,5,8,12}
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key>arr[mid]){
            s = mid +1;
        }
        else if(key<arr[mid]){
            e = mid - 1;
        }
        mid = s+(e-s)/2; 
    }
    cout<<mid<<endl;
    return ans;
}