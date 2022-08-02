bool isPerfectSquare(long long n) {
	// Write your code here.
    long long mid,start=1,end=n/2;
    while(start<=end){
        mid = (start+end)/2;
        if(mid*mid>n) end = mid-1;
        else if(mid*mid<n) start = mid+1;
        else return true;
    }
    if(n==1) return true;
    return false;
}
