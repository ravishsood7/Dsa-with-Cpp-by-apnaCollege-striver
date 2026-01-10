#include <iostream>
using namespace std;
class Condition{
   public:
         void ifElse(){
           int num;
           cout<<"Enter the number \n";
           cin>>num;
           if (num > 0){
               cout<<"Positive Number"<<endl;
           }else{
               cout<<"Negative number"<<endl;
           }
         }
         void evenOdd(){
          int num ;
          cout<<"Enter the number \n";
          cin >> num;

          if(num %2 ==0){
              cout<<" Even number"<<endl;
          }else{
              cout<<" Odd number ";
          }
         }

         void grade(){
           int marks;
           cout<<"Enter the marks"<<endl;
           cin>>marks;

           if( marks > 90){
            cout<< "A"<<endl;
           }
           else if(marks<=90 && marks>70){
            cout<<"B"<<endl;
           }
           else{
            cout<<"C";
           }
         }

         void findCase(){
          char a;
          cout<<"Enter the character"<<endl;
          cin >> a;
          if( a>= 65 && a<=90 ){
            cout<<"Upper case"<<endl;
          }else if(a>=97 && a<=122){
            cout<<" Lower case"<<endl;
          }else{
            cout<<"Not a valid alphabet"<<endl;
          }
         }

         void ternaryOperator(){
          int a = 10;
          string x = a <5 ? "Less than 5": "Greatr than 5";
          cout<< x;
         }
         void whileLoop(){
          int i = 1;
          while(i <=5){
            cout<<i<<'\t';
            i++;
          }
         }

         void forLoop(){
          int n = 100;
          for(int i = 1;i<=n;i++){
            cout<< i << " ";
          }
         }

         void forSum()
         {
          int n = 100;
          int sum;
          for(int i = 1;i<=100;i++){
             sum = sum + i;
          }
          cout<<sum;
         }
         void forOddSum(){
          int sum = 0;
          int n = 100;
          for (int  i = 1;i<= n ; i = i + 2){
              sum = sum + i;
          }
          cout<<sum;
         }

         void doWhile(){
          int n = 5;
          do{
            cout<<"Grater than 6"<<endl;
          }while(n>6);
         }

         void checkPrime(){
          int num ;
          cout<<"Enter the number \n";
          cin>> num;

          int count = 0 ;
          for(int i = 1;i<=num;i++){
              if(num % i == 0){
                count++;
              }
          }
          if (count == 2){
             cout<<"Number is prime number"<<endl;
          }
          else {
            cout<<"Not the prime number"<<endl;
          }
         }
         void nestedLoop(){
           for(int i = 1;i<=5;i++){
            for(int j = 1;j<=i;j++){
               cout<<" * ";
            }
            cout<<endl;
           }
         }
         void factorial(){
          int n = 5;
          int fact = 1;
          for(int i = 1;i<= n;i++){
             fact = fact * i;
          }
          cout<<fact;
         }
         void sumdiv3(){
          int sum = 0;
          for(int i = 1;i<=100;i++){
                if(i % 3 == 0){
                  sum = sum +i;
                }
          }
          cout<<sum;
         }
};

int main(){
  Condition obj;
  obj.ifElse();
  obj.evenOdd();
  obj.grade();
  obj.findCase();
  obj.ternaryOperator();
  obj.whileLoop();
  obj.forLoop();
  obj.forSum();
  obj.forOddSum();
  obj.doWhile();
  obj.checkPrime();
   obj.nestedLoop();
  obj.factorial();
  obj.sumdiv3();
  return 0;
}