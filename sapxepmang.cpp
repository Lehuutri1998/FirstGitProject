#include <iostream>
#include <conio.h>

using namespace std ;

void nhapmang(int a[10])
{
     for (int i = 0; i < 10; i++)
     {
          /* code */
          cout << "Nhap vao phan tu thu: " << i + 1  << " " ;
          cin >> a[i] ;
     }
     
}
void xuatmang(int a[10])
{
     for (int i = 0; i < 10; i++)
     {
          /* code */
          cout << "Gia tri phan tu thu " << i + 1 << " la : " << a[i] << endl ;
     }
     
}

void sapxepmang(int a[10])
{
     int i, j ;
     for ( i = 0; i < 10; i++)
     {
          for ( j = 0; j < 9; j++)
          {
               if (a[j]>=a[j+1])
               {
                    int t ; 
                    t = a[j] ; 
                    a[j] = a[j+1] ;
                    a[j+1] = t ;

               }
               
          }
          
     }
     
}
int main ()
{
     int a[10]  ; 
     nhapmang(a) ; 
     cout << "Ket thuc nhap mang : \n" ; 
     sapxepmang(a) ;
     cout << "Mang sau khi da sap sep: \n" ;
     xuatmang(a) ;
     return 0; 
}