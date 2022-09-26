#include <bits/stdc++.h> 
bool isPowerOfTwo(int n)
{
    // Write your code here
    if(n==1) return true;
    else if(n%2==0) return isPowerOfTwo(n/2);
    return false;
}
