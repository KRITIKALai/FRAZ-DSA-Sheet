int findPeak(vector<int> &arr) {
    // Write your code here
    int mid,start=0,end=arr.size()-1;
    while(start<=end){
        mid = (start+end)/2;
        if(mid>0 && mid<arr.size()-1 && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            return arr[mid];
        if(mid==0 && arr[mid]>arr[mid+1]) return arr[mid];
        if(mid==arr.size()-1 && arr[mid]>arr[mid-1]) return arr[mid];
        else if(arr[mid]<arr[mid+1]) start = mid+1;
        else end = mid-1;
    }
}
