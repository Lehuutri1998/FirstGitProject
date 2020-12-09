#include <iostream>
#include <string>
#include <cstdlib>

using namespace std  ;

void showheading();
int hivalue(int stu[4][5]);
int lovalue(int stu[4][5]);
void showheading()
{
    cout<<"========================================================\n";
    cout<<"ID     Kiemtra1     Kiemtra2     Giuaky      Cuoiky\n";
    cout<<"========================================================\n";
}

void displaymenu()
{
    cout << "========================================================= \n";
    cout << "                         MENU                              \n";
    cout << "========================================================= \n";
    cout << "              1. Quan sat tat ca cac ban ghi cua sinh vien \n"  ; 
    cout << "              2. Quan sat mot ban ghi cua sinh vien theo ID  \n" ;
    cout << "              3. Hien thi diem thi cao nhat va thap nhat      \n " ; 
}

void viewall(int stu[4][5])
{
    int i,j ; 
    showheading() ;
    for ( i = 0; i <4 ; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            /* code */
            cout << stu[i][j] << "\t" ; 
            
        }
    cout     << "\n" ;  
    } 
}

void viewbyID (int stu[4][5])
{
    int i , j, id ;
    bool  l = false ; 
    cout << "Nhap vao gia tri ID cua SV: " ;
    cin >> id ; 
    for (i = 0 ; i < 4; i++)
    {
        if (id == stu[i][0])
        {
            /* code */
            showheading() ;
            for (j = 0 ; j < 5 ; j++)
            {
                
                l = true ; 
                cout << stu[i][j] << "\t" ;
            }
        }       
    }
        cout << "\n" ;
        if(l==false) cout << "Khong tim thay ID" << "\n" ; 
   
} 

void showlh(int stu[4][5])
{
    cout << "Diem thi cao nhat la: " << hivalue (stu) << "\n" ;
    cout << "Diem thi thap nhat la: " << lovalue (stu) << "\n" ;
}

int hivalue(int stu[4][5])
{
    int i, *max ; 
    max = & stu[0][4] ; 
    for (i = 0; i <4 ; i++)
    {
        if (*max < stu[i][4])
        {
            /* code */
            *max = stu[i][4] ; 

        }
        
    }
    return *max ; 
   
}
int lovalue(int stu[4][5])
{
    int *min,i;
    min = &stu[0][4];
    for ( i = 0; i <4 ; i++)
    {
        /* code */
        if (*min > stu[i][4])
        {
            /* code */
            *min = stu[i][4] ;
        }
        
    }
    return *min ; 
}


int main (int argc , char**argv[])
{
// Xaay dung mang 2 chieu
int stu[4][5]={{6001,7,7,8,9},{6002,6,8,5,8},{6003,5,6,6,7},{6004,8,9,8,9}};
displaymenu() ;
int yourchoise ; 
char confirm ; 

do
{
    /* code */
    cout << "Nhap su lua chon cua ban: " ; 
    cin >> yourchoise ; 
    switch (yourchoise) 
    {
    case 1:
        /* code */
        viewall(stu) ;
        break;
    case 2:
        viewbyID(stu); 
        break ;
    case 3:
        showlh(stu) ;
        break ; 
    default:
        cout << "Khong hop le \n " ;
        break;
    }
    cout << "Nhap y hoac Y de tiep tuc: " ;
    cin >> confirm ;
} while (confirm == 'y' || confirm == 'Y');
return 0;


}


    
