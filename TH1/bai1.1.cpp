#include <iostream>
#include <iomanip>

using namespace std;

class student
{
    private:
        char masv[20];
        int tuoi;
        char hoten[20];
        int diem;
    public:
        void nhap();
        void xuat();

};

void student::nhap()
{
    cout<<"\nNhap ten cua ban: "; fflush(stdin);  gets(hoten);
    cout<<"\nNhap ma sinh vien: "; fflush(stdin);   gets(masv);
    cout<<"\nNhap tuoi cua ban: ";                  cin>>tuoi;
    cout<<"\nNhap diem cua ban: ";                  cin>>diem;
}

void student::xuat()
{
    cout<<"\nName: "<<hoten;
    cout<<"\nMa sinh vien: "<<masv;
    cout<<"\nTuoi: "<<tuoi;
    cout<<"\nDiem: "<<diem;
}


main()
{
    student a,b;
    cout<<setw(30)<<"THONG TIN SINH VIEN"<<endl;
    
    a.nhap();
    b.nhap();

    a.xuat();
    b.xuat();
}