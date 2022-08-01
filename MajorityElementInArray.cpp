//Method 1 -> Using Maps

#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    map<int, int> Occurences;
    for(int i=0;i<n;i++) Occurences[arr[i]]++;
    for(auto occ: Occurences){
        if(occ.second>ceil(n/2)) return occ.first;
    }
    return -1;
}

//Method 2 -> Using Moore's Voting Algorithm
#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int majEl=0, counter=0;
    for(int i=0;i<n;i++){
        if(counter==0) majEl = arr[i];
        if(majEl == arr[i]) counter++;
        else counter--;
    }
    counter=0;
    for(int i=0;i<n;i++){
        if(arr[i]==majEl) counter++;
    }
    return counter<=n/2?-1:majEl;
}
