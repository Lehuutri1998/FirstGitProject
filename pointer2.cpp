#include <iostream>

#include<conio.h>

using namespace std ;

int main ()
{ 
    int a[5] ;
    int i ;
    int *p ;
    p = a ; 
    cout << "Nhap vao mang a: " << endl ;
    cin >> *p >> *(p+1) >> *(p+2) >> *(p+3) >> *(p+4) ;
    cout << "Mang vua nhap la: " << endl ;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout << *(p+i) << "\t" ;
    }
    return 0 ;
    
}