#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> res(n, vector<long long int>());
  res[0].push_back(1);
  if(n >= 2){
    res[1].push_back(1); res[1].push_back(1);
  }

  for(int i = 2; i < n; i++){
    for(int j = 0; j <= i; j++){
      if(j == 0 || j == i){
        res[i].push_back(1);
      }
      else{
        res[i].push_back(res[i-1][j-1] + res[i-1][j]);
      }
    }
  }

  return res;

}
