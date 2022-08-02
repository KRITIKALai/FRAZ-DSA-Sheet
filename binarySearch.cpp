int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int mptr,lptr=0,rptr=n-1;
    while(lptr<=rptr){
        mptr = (lptr+rptr)/2;
        if(*(input+mptr)>val) rptr=mptr-1;
        else if(*(input+mptr)<val) lptr = mptr+1;
        else return mptr;
    }
    return -1;
}
