#include <iostream>
using namespace std;
class Pattern{
  public:
        int n;
        void pattern1(){
          cout<<"Enter the number"<<endl;
          cin>>n;
          for(int i = 1 ;i<=n;i++){
              for(int j = 1;j<=n;j++){
                  cout<< j<<" ";
              }
              cout<<endl;
          }
        }
        void pattern2(){
          cout<<"Enter the number"<<endl;
          cin>>n;
          for(int i = 1 ;i<=n;i++){
              for(int j = 1;j<=n;j++){
                  cout<<"* ";
              }
              cout<<endl;
          }
        }
        void pattern3(){
          cout<<"Enter the number"<<endl;
          cin>>n;
          for(int i = 1 ;i<=n;i++){
            int c = 97;
              for(int j = 1;j<=n;j++){
                  cout<< (char)c<<" ";
                  c++;
              }
              cout<<endl;
          }
        }
        void pattern4(){
          /*
            1 2 3
            4 5 6 
            7 8 9
          */
         int rows = 3;
         int columns= 3;
         int num =1;
         for(int i = 0 ;i < rows;i++){
            for(int j = 0; j< columns;j++){
               cout<<num<< " ";
               num++;
            }
            cout<<endl;
         }
        }

        void pattern5(){
          int rows = 3 ;
          int columns = 3;
          int chr = 65;
          for(int i = 0;i<rows; i++){
            for(int j = 0;j<columns;j++){
                  cout<<(char)chr<<" ";
                  chr++;
            }
            cout<<endl;
          }
        }
        void pattern6(){
          int rows= 5;
          for(int i = 1 ;i<=rows;i++){
            for(int j = 1;j<=i;j++){
              cout<<"* ";
            }
            cout<<endl;
          }
        }
        void pattern7(){
          for(int  i = 1;i<=5;i++){
            for(int j= 1;j<=i;j++){
              cout<<i<<" ";
            }
            cout<<endl;
          }
        }
        void pattern8(){
          for(int i =1;i<=5;i++){
            for(int j =1;j<=i;j++){
              cout<<j<<" ";
            }
            cout<<endl;
          }
        }

        void pattern9(){
          for(int i = 1;i<=5;i++){
             int k = i;
            for(int j = 1;j<=i;j++){
              cout<< k <<" ";
              k--;
            }
            cout<<endl;
          }
        }
        int k = 1;
        void pattern10(){
          for(int i=1;i<=5;i++){
            for(int j = 1;j<=i;j++)
             {
              cout<<k<<" ";
              k++;
             }
             cout<<endl;
          }
        }

        void pattern11(){
          for(int i =1;i<=5;i++){
            for(int k = 1;k<i;k++){
              cout<<" ";
            }
            for(int j = 1;j<=5-i;j++){
              cout<<i;
            }
            cout<<endl;
          }
        }

        void pattern12(){
         for(int i=1;i<=5;i++){
          for(int k = 1;k<=5-i;k++){
            cout<<" ";
          }
          for(int j =  1;j<=i;j++){
            cout<< j;
          }
          for(int l = i-1;l>=1;l--){
            cout<<l;
          }
          cout<<endl;
         }
        }

        void pattern13(){
          /*
              *
            *   *  
          *       *
            *   *
              * 
          */
          for(int )


        }
};
int main(){
  Pattern obj;
  // obj.pattern1();
  // obj.pattern2();
  // obj.pattern3();
  // obj.pattern4();
  // obj.pattern5();
  // obj.pattern6();
  // obj.pattern7();
  // obj.pattern8();
  // obj.pattern9();
    //  obj.pattern10();
    // obj.pattern11();
    obj.pattern12();

  return 0;
}