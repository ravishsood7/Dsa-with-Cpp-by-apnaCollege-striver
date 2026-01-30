#include<iostream>
using namespace std;
class Input{
   public:
          int age;
          Input(){
            cout<<"Enter your age"<<endl;
            cin>>age;
            cout<< "Your age is "<<age;
          }

          void arithmeticOperations(){
            int a = 11, b = 5;
            cout<<(a/b) <<endl;
            cout<< a + b<<endl;
            cout<< a -b;
          }

          void relationalOperator(){
            int a = 10, b =2;
            cout<< "<" << (a<b)<<endl;
            cout<<" >" << (a>b)<<endl;
          }
};


int main(){
  Input obj;
  int age = 26;
  float pi = 3.14f;
  cout<<"First code with apna College"<<endl;
  cout<<"My name is Ravish"<<endl;
  cout<<"I am "<<age<<" years old."<<endl;
  cout<<sizeof(age)<<endl;
  cout<<sizeof(pi)<<endl;
  bool isSafe = false;
  bool t = true;
  double d = 10.98;
  cout<<isSafe << t <<d;


  char grade = 'A';
  int value = grade;
  cout<<value <<grade;

  

  double price = 100.98;
  int a = (int)price;
  cout<<price << " "<<a;
  return 0;
}