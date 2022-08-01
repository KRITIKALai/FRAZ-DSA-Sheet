void moveZerosToLeft(int *arr, int n) 
{
    // Write your code here
    int lptr=n-1, rptr=n-1;
    while(lptr>=0){
        if(arr[lptr]!=0) swap(arr[lptr--], arr[rptr--]);
        else lptr--;
    }
}
