#include<iostream>
using namespace std;

//Print hello world
void printHello(){
  cout<<"Hello World"<<endl;
}

//Sum of two numbers
int sum2(int a, int b){
  cout<<a<<" + "<<b<<" = "<<( a+ b)<<endl;
  return (a+b);
}

//Minimum of two numbers
int min2(int a, int b){
  if(a<b){
    return a;
  }
  else{
    return b;
  }
}

//Calculate sum of numbers from 1 to n
int sumOfN(int n){
  int sum  = 0;
   for(int i = 1;i<=n;i++){
       sum = sum + i;
   }
   return sum;
}

//Calculate n factorial
int factorial(int n){
  int fact = 1 ;
  if (n == 0 || n==1){
      return 1;
  } 
  for (int i =1;i<=n;i++){
    fact = fact * i ;
  }
  return fact;
}

// sum of digits of a number
int sumOfNumbers(int n){
  int num = n;
  int sum = 0;
  int rem = 0;
  while (num>0){
      rem = num % 10;
      sum = sum + rem;
      num = num /10;
  }
  return sum;
}
//Calculate nCr binomial coefficient of n and r
int binomilcfft(int n, int r){
  int numerator  = factorial(n);
  int denominator = factorial(r) * factorial(n-r);
  double coeff = numerator / denominator;
  return coeff;
}

int main(){

  printHello();
  
  int sum = sum2(10,25);
  int min = min2(10,25);
  
  cout<<"Minimum of two numbers is "<<min<<endl;
  cout<<"Sum of first 10 natural numbers is :"<<sumOfN(10)<<endl;
  cout<<"Factorial of n natural numbers is: "<<factorial(99)<<endl;
  cout<<"Sum of digits is: "<<sumOfNumbers(123)<<endl;
  cout<<"Binomial Coefficient"<<binomilcfft(8,2)<<endl;
  return 0;

} 