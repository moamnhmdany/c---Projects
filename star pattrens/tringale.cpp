#include <iostream>
#include <set>

using namespace std;

int main()
{
    int i, j,rows;

    cout << "Enter triangle length  ";
    cin >> rows;
    for(i = 1 ; i <= rows ; i++){
       
        for(j= 1; j<= 2*rows -1 ; j++){
            if( j >= rows-(i-1) && j <= rows+(i-1)){
             cout<< "*" ;
            }
            else {
            cout<< " ";
            }
        }
        cout<< "\n" ;
    }
   

    return 0;
}