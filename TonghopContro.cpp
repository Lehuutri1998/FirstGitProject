#include <iostream>
#include <conio.h>
#include <math.h >

using namespace std ;

void NhapMang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
         /* code */
         cout << "Nhap a[" << i+1 << "] : "  ;
         cin >> *(a+i) ;  
    }
    
     
}
void XuatMang (int *a, int n)
{
     cout << "Mang vua nhap: " ;
     for (int i = 0; i < n; i++)
     {
          cout << *(a+i) << "\t" ;
          /* code */
     }
     
}

void PhepCongcontro(int *a, int n)
{
     
}
int main ()
{
     int i ; 
     cout << "Nhap so phan tu cua mang: " ;
     cin >> i ;
     int *p = NULL ;
     p = new int[i] ;
  
     system ("pause") ;
     return 0 ;
}