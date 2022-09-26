//Slow

#include <bits/stdc++.h> 
long long Pow(int X, int N)
{
    // Write your code here.
    if(N==0) return 1;
    return X * Pow(X,N-1);
}

//Fast

#include <bits/stdc++.h> 
long long Pow(int X, int N)
{
    // Write your code here.
    if(N==0) return 1;
    
    long long smallerAns = Pow(X,N/2);
    smallerAns = smallerAns*smallerAns;
    
    if(N&1) return X*smallerAns;
    return smallerAns;
}
