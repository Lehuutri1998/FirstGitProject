#include <iostream>
#include <conio.h>

using namespace std ;
int *findMax(int a[],int n)
{
    int *max = a ;
    for (int i = 1; i < n; i++)
    {
        /* code */
        if (*max < *(max+i))
        {
            /* code */
            *max = *(max+i) ; 
        }    
    }
    
    return max ;
}

int main()
{
    int *p ;
    int n ;
    cout << "Nhap so phan tu cua mang: " ;
    cin >> n ;
    //cout << "\n" ;
    int b[n] ;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << "Nhap vao phan tu thu " << i << ": " ;
        cin >> b[i] ;
    }
    p = findMax(b,n) ;
    cout << "Gia tri lon nhat la: " << *p ;

}
