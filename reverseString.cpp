string reverseString(string str)
{
	// Write your code here.
    int start=0,end=str.size()-1;
    while(start<=end) swap(str[start++],str[end--]);
    return str;
}
