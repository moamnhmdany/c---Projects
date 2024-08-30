#include<iostream>
using namespace std;
int main()
{
int hight, width, i, j;
cout << "Enter rectangle hight: ";
cin >> hight;
cout << "Enter rectangle width: ";
cin >> width;

for(i = 1; i <= hight; i++)
{


if((i == 1) || (i == hight) ){

    for(j = 1; j <= width; j++){
             cout << "*";      
    }
    
}else
{
    for(j = 1; j <= width; j++){

    
    if(j == 1 || j == width){
        cout << "*";
    }else{
       cout << " ";

    }
            
}

 }
  cout << "\n";
}
return 0;
}