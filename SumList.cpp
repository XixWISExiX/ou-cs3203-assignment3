#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Returns the sum total of the List values
int SumList(vector<int> v){
  int sum = 0;
  for(int i:v) sum+=i;
  return sum;
}
// Returns the product total of the List values
int ProductList(vector<int> v){
  int sum = 1;
  for(int i:v) sum*=i;
  return sum;
}

// Returns all elements in the List, but in reverse order
vector<int> ReversedList(vector<int> v){
  vector<int> a;
  for(int i = v.size()-1; i >= 0; i--) a.push_back(v[i]);
  return a;
}

int main()
{
  printf("When done entering numbers, type \"i\", and then enter.\n");
  vector<int> list;
  int number;
  while(cin>>number) list.push_back(number);
  printf("Sum of list = %d\n", SumList(list));
  printf("Product of list = %d\n", ProductList(list));
  vector<int> reversedList = ReversedList(list);
  printf("Reversed List Result\n");
  for(int i = 0; i < reversedList.size(); i++){
    printf("Element %d is value %d\n", i, reversedList[i]);
  }
  return 0;
}
