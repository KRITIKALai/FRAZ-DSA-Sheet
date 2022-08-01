#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> pasTr = {{1}};
    vector<long long int> tbp = {1,1};
    if(n==1) return {{1}};
    else if(n==2){
        pasTr.push_back(tbp);
        return pasTr;
    } 
    else{
        pasTr.push_back(tbp);
        for(int i=2;i<n;i++){
            tbp = {1};
            for(int j=0;j<i-1;j++){
                tbp.push_back(pasTr[i-1][j]+pasTr[i-1][j+1]);
            }
            tbp.push_back(1);
            pasTr.push_back(tbp);
        }
    }
    return pasTr;
}


//Incase the question is asking to find the element in the Rth row of Cth Column in the Pascal's Triangle
//We can use the Combinations formula
//Approach 1
int ncr(int n, int r){
  int num=1,den=1;
  for(int i=1;i<=n-r+1;i++) num*=i;
  for(int i=1;i<=r;i++) den*=i;
  return num/den;
}

//Approach 2
int ncr(int n, int r){
  if(r>n-r) r=n-r;
  for(int i=1;i<=r;i++){
    ans *= (n-r-i);
    ans /= i;
  }
  return ans;
}
