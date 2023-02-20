#include<iostream>
#include<string>
#include<iomanip>
#include<bits/stdc++.h>

using namespace std;

//// Init class Khoa
class truong;
class khoa
{
    private:
        char ma_khoa[50];
        char ten_khoa[50];
        // Khai bao lop ban de truong duoc su dung thuoc tinh cua khoa
        friend class truong;
        friend void PRINTF_answer(truong *a,int n);
};

//// Init class Ban
class ban
{
    private:
        char ma_ban[50];
        char ten_ban[50];
    public:
        void input();
        void output();
        // Khai bao lop ban de truong duoc su dung thuoc tinh cua ban
        
};

// Nhap xuat cho class Ban
void ban::input()
{
    cout<<"Ma ban: ";     fgets(ma_ban,50,stdin);
    cout<<"Ten ban: ";    fgets(ten_ban,50,stdin);
}
void ban::output()
{
    cout<<"MB: "<<ma_ban<<endl<<"TB: "<<ten_ban<<endl;
}
//// Init class Truong ( 1 -nhieu)
class truong
{
    private:
        int so_khoa;
        khoa x[50];
        
        int so_ban;
        ban y[50];
    public:
        void input();
        void output();
        friend void PRINTF_answer(truong *a,int n);
};
// Nhap xuat cho truong
void truong::input()
{
    cout<<"Nhap so khoa: "; cin>>so_khoa;
    cout<<"Nhap so ban: ";  cin>>so_ban;
    
    /* Do Khoa chua co phuong thuc nhap/xuat nen can viet ham nhap xuat*/
    for(int i=0; i<so_khoa; i++)
    {
        cout<<"Ma khoa: ";    fgets(x[i].ma_khoa, 50, stdin );
        cout<<"Ten khoa: ";   fgets(x[i].ten_khoa, 50, stdin);
    }
    /*Ban da co phương thức nhập xuất nên chỉ cần khai báo số ban và đưa vào vòng lap*/
    for(int i=0; i<so_ban; i++)
    {
        cout<<"Nhap so ban: ";  cin>>so_ban;
        for(int j=0; j<so_ban; j++)
        {
            y[i].input();
        }
    }
}

void truong::output()
{
    for(int i=0; i<so_khoa; i++)
    {
        cout<<"Ma khoa: "<<x[i].ma_khoa<<endl;
        cout<<"Ten khoa: "<<x[i].ten_khoa<<endl;
    }

    for(int i=0; i<so_ban; i++)
    {
        y[i].output();
    }
}
void PRINTF_answer(truong a[50], int n)
{
    for(int i=0; i<n; i++)
    {
        int check=0;
        for(int j=0; j<a[i].so_khoa; j++ )
            if(strcmp(a[i].x[j].ten_khoa, "CNTT")==0)
            {
                check=1;
            }
        if(a[i].so_ban > 3 || check ==1)
        {
            a[i].output();
        }
    }
}

int main()
{
    truong a[50]; int n;
    cout<<"So truong: ";    cin>>n;
    for(int i=0; i<n;   i++)
    {
        a[i].input();

        
    }
    PRINTF_answer(a,n);
    
}