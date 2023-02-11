#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int SumList(vector<int> v){
  int sum = 0;
  for(int i:v) sum+=i;
  return sum;
}
int ProductList(vector<int> v){
  int sum = 1;
  for(int i:v) sum*=i;
  return sum;
}

int main()
{

  vector<int> v = {10, 20, 30};
  // cout<<"Sum of list = "<<SumList(v)<<endl;
  printf("Sum of list = %d\n", SumList(v));
  printf("Product of list = %d\n", ProductList(v));

  return 0;
}
