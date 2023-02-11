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
  printf("When done entering numbers, type \"i\", and then enter.\n");
  vector<int> list;
  int number;
  while(cin>>number) list.push_back(number);
  printf("Sum of list = %d\n", SumList(list));
  printf("Product of list = %d\n", ProductList(list));
  return 0;
}
