// #include<iostream>
// using namespace std;

// //a + i <=> &a[0 + i] ;

// //*(a+i) <=> a[i]

// void NhapMang(int *a, int n)
// {
// 	for(int i = 0; i < n; i++)
// 	{
// 		cout << "Nhap a[" << i << "]: ";
// 		cin >> *(a + i);
// 	}
// }

// void XuatMang(int *a, int n)
// {
// 	for(int i = 0; i < n; i++)
// 	{
// 		cout << *(a + i) << " ";
// 	}
// }

// int main()
// {
// 	int *a = NULL;
// 	int n = 0;
// 	do{
// 		cout << "Nhap so luong phan tu:\n";
// 		cin >> n;
// 		if(n < 0)
// 			cout << "So luong la phai >= 0!\n";
// 	}while(n < 0);
// 	a = new int[n];	// Xin cấp phát n ô nhớ kiểu int ở vùng nhớ HEAP
// 	NhapMang(a, n);
// 	XuatMang(a, n);
// 	if(a != NULL)
// 	{
// 		delete[] a;	// Thu hồi n ô nhớ vừa xin cấp phát trước đó 
// 	}

// 	system("pause");
// 	return 0;
// }






/**************************************************************************************************/


// #include <iostream>

// #include <conio.h>

// using namespace std ; 
// void HoanVi(int *a, int *b)
// {
//     int temp ; 
//     temp = *a ;
//     *a = *b ; 
//     *b = temp ;
// }
// int main()
// {
//     int x, y ;
//     cout << "Nhap vao gia tri 2 so muon doi cho: "  ; 
//     cin >> x >> y ;
//     HoanVi (&x , &y ) ;
//     cout << "Gia tri sau khi hoan vi : \n" ;
//     cout << x << "    " << y ;
    
// }






/**************************************************************************************************/

#include <iostream>

#include <conio.h >
using namespace std ;

int main ()
{
    int *pointer = NULL ;
    int x = 1 ;

    // Khai bao con tro p tro den bien a
    int *p = NULL ; 
    p = &x ;

    // Khai bao con tro q tro den bien b 
    int y = 100 ;
    p = &y ;
    pointer = p ;
    cout << "Gia tri ma con tro Pointer dang tro den: " << *pointer << endl ; 
    cout << "Dia chi cua bien y la: " << &y << endl ;
    cout << "Dia chi ma con tro pointer dang tro den: " << pointer <<endl ;
    cout << "Dia chi cua chinh con tro pointer: "  << &pointer << endl ;



}