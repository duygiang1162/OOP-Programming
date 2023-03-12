#include <iostream>
#include <iomanip>

#define FOR(i,n) for(int i=0; i<n; i++)

using namespace std;
class Sinhvien;
class Diem
{
    private:
        char ten_mon[20];
        int so_trinh;
        int score;
    public:
        void input();
        void output();
        friend class Sinhvien;
        friend void filter(Sinhvien s);
};

class Sinhvien
{
    private:
        char ma_sv[20];
        char ten_sv[20];
        int khoa;
        char lop[20];
        Diem *diem;
        int n;
    public:
        void input();
        void output();
        friend void filter(Sinhvien s);
        friend void add(Sinhvien &s);


};
void Diem::input()
{
    cout<<"\nNhap ten mon: ";       fflush(stdin);      gets(ten_mon);
    cout<<"\nNhap so trinh: ";                          cin>>so_trinh;
    cout<<"\nNhap so diem: ";                           cin>>score;
}

void Diem::output()
{
    cout<<ten_mon<<setw(20)<<so_trinh<<setw(15)<<score<<endl;
}

void Sinhvien::input()
{
    cout<<"\nNhap ma sinh vien: ";      fflush(stdin);      gets(ma_sv);
    cout<<"\nNhap ten sinh vien: ";     fflush(stdin);      gets(ten_sv);
    cout<<"\nNhap lop: ";               fflush(stdin);      gets(lop);
    cout<<"\nNhap khoa: ";                                  cin>>khoa;
    cout<<"\nNhap so mon: ";                                cin>>n;
    diem = new Diem[n];
    FOR(i,n)
    {
        cout<<"\nMon thu "<<i+1;
        diem[i].input();
    }

}

void Sinhvien::output()
{
    cout<<"\tPHIEU BAO DIEM"<<endl;
    cout<<"Ma sinh vien: "<<ma_sv<<"\tTen sinh vien: "<<ten_sv<<endl;
    cout<<"Lop: "<<lop<<"\t\tKhoa: "<<khoa<<endl;
    cout<<"Bang diem"<<endl;
    cout<<"STT"<<setw(15)<<"Ten mon"<<setw(20)<<"So trinh"<<setw(15)<<"Diem"<<endl;

    float diem_tb=0;
    float tong_diem=0;
    float tong_so_trinh=0;
    FOR(i,n)
    {
        tong_diem+=diem[i].score*diem[i].so_trinh;
        tong_so_trinh += diem[i].so_trinh;
    }
    diem_tb = tong_diem/tong_so_trinh;
    FOR(i,n)
    {
        cout<<i+1<<setw(15);
        diem[i].output();
    }
    cout<<"Diem trung binh: "<<setprecision(2)<<diem_tb<<endl;

}
    /*BONUS 1: in ra cac mon co so trinh > 3*/
void filter(Sinhvien s)
{
    for(int i=0,j=0; i<s.n; i++)
    {
        if(s.diem[i].so_trinh > 3)
        {
            j++;
            cout<<j<<setw(15);
            s.diem[i].output();
        }
    }
}

    /*BONUS 2: Chen them mon vao phieu*/
void add(Sinhvien &s)
{
    int vt;
    do
    {
        /* code */
        cout<<"\nNhap vi tri can chen: ";   cin>>vt;
        vt--; // Vi tri duoc hieu tinh tu goc 0 nen can tru di 1 dv de dung mong muon khi chen

    } while (vt<0 || vt>s.n);
    Diem d;
    cout<<"\nNhap mon can chen: ";
    d.input();
    for(int i=s.n; i>vt; i--)
    {
        s.diem[i] = s.diem[i-1]; // Gan gia tri cua vi tri truoc cho vi tri sau
    }
    s.diem[vt]=d;
    s.n++;
    
}
main()
{
    Sinhvien s;
    s.input();
    s.output();

    cout<<"\nDANH SACH CAC MON CO SO TRINH > 3"<<endl;
    cout<<"STT"<<setw(15)<<"Ten mon"<<setw(20)<<"So trinh"<<setw(15)<<"Diem"<<endl;
    filter(s); // BONUS 1
    add(s); // BONUS 2
    cout<<setw(30)<<"\nDANH SACH PHIEU SAU KHI CHEN"<<endl;
    s.output();




}