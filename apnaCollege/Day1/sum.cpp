#include <iostream>
using namespace std;

int main(){
  int num1, num2;
  cout<< "Enter the first number \n";
  cin>>num1;

  cout<<"Enter the second number \n";
  cin>> num2;

  cout << num1 << " + " <<num2 << " = "<<(num1 + num2);


  int a = 5;
  int b = a++;
  cout<< b << a;
  return 0;
}