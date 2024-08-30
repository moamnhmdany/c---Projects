#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct MyStruct
{
    int age ; 
    char gender ;
};

int main()
{

   MyStruct *pointer1;
   MyStruct st1 ;
   pointer1 =&st1;
   pointer1->age = 12;
   std::cout << pointer1->age ;
    int *p1 ;
  int  a[5]={1,2,3,4,5};
    p1 = &a[0];
    p1=p1+3;
   // cout << *p1;
}