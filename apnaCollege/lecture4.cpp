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
};
int main(){
  Pattern obj;
  // obj.pattern1();
  // obj.pattern2();
  obj.pattern3();
  return 0;
}