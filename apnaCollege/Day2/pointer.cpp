#include<iostream>
using namespace std;

int main(){
  int a = 10;
  int *ptr =  &a;
  int **dptr = &ptr;
  // cout<<a<<endl;
  // cout<<*ptr<<endl;
  // cout<<ptr<<endl;
  // cout<<&a<<endl;
  // cout<<*dptr<<endl;
  // cout<<**dptr<<endl;
  // cout<<dptr<<endl;


  int *nulPtr;
  cout<<nulPtr<<endl;
  int *nptr = NULL;
  cout<<nptr<<endl;

  return 0;
}