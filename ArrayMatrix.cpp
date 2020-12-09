#include <iostream>
#include <conio.h>

using namespace std ;


void nhapmang(int n, int m)
{
    int i , j ;
    int a[n][m] ;
    cout << "Nhap vao mang : \n"  ;
    for ( i = 0; i <n ; i++)
    {   
        
        for(j =0 ; j<m; j++ )
        {
            cout<<"Nhap vao phan tu thu " << j +1  << " cua hang "<< i+1 << ": "  ;
            //cout << "\n" ;
            cin >> a[i][j] ;
        }
    }
    
}

void xuatmang(int n,int m)
{
    int i , j ;
    int a[n][m] ; 
    cout << "Mang vua nhap la : "<<endl; 
    for ( i = 0; i < n ; i++)
    {
        for ( j = 0; j < m ; j++)
        {
            cout <<  a[i][j] << "\t\t" ;
        }
        cout << "\n" ;
    }
    
}
int main()
{
    int a, b ;
    cout << "Nhap vao kich thuoc cua mang: " ; 
    cin >> a >> b ;
    int array[a][b] ; 
    nhapmang(a,b) ;
    xuatmang(a,b) ; 
    xuatmang(a,b);
    xuatmang(a,b);
    return 0 ; 

}






