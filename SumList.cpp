#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int ListLen(vector<int> v){
  int sum = 0;
  for(int i:v) sum+=i;
  return sum;
}

int main()
{

  vector<int> v = {10, 20, 30};
  cout<<ListLen(v);

  return 0;
}
