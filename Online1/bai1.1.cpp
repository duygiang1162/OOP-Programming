// #include <iostream>
// #include <iomanip>

// #define FOR(i,n) for(int i=0; i<n; i++)

// using namespace std;

// class Hang
// {
//     private:
//         float don_gia;
//         char ten_hang[20];
//         int so_luong;
//     public:
//         void input();
//         void output();
//         float thanh_tien();
//         float tong_tien;
// };

// class Nha_cung_cap
// {
//     private:
//         char ten_ncc[20];
//         char ma_ncc[20];
//         char dia_chi[20];
//     public:
//         void input();
//         void output();
// };

// class Phieu
// {
//     private:
//         char ma_phieu[20];
//         char ngay_lap[20];
//  // 1 phieu co nhieu object hang hoa
//     public:
//         void input();
//         void output();

// };

// /*------------------------------DINH NGHIA CAC PHUONG THUC-----------------------*/
// // METhOD FOR CLASS HANG
// void Hang::input()
// {
//     cout<<"\nNhap ten hang: ";      fflush(stdin);      gets(ten_hang);
//     cout<<"\nNhap don gia: ";                           cin>>don_gia;
//     cout<<"\nNhap so luong: ";                          cin>>so_luong;
// }

// void Hang::output()
// {
//     cout<<ten_hang<<setw(15)<<don_gia<<setw(15)<<so_luong<<setw(15)<<thanh_tien()<<endl;
// }

// float Hang::thanh_tien()
// {
//     return don_gia*so_luong;
// }

// // METHOD FOR CLASS NHA CUNG CAP
// void Nha_cung_cap::input()
// {
//     cout<<"\nNhap ten NCC: ";      fflush(stdin);       gets(ten_ncc);
//     cout<<"\nNhap ma NCC: ";       fflush(stdin);       gets(ma_ncc);
//     cout<<"\nNhap dia chi: ";      fflush(stdin);       gets(dia_chi);
// }

// void Nha_cung_cap::output()
// {
//     cout<<"\nMa NCC: "<<ma_ncc<<"\t";
//     cout<<"Ten NCC: "<<ten_ncc;
//     cout<<"\nDia chi: "<<dia_chi<<endl;
// }

// // METHOD FOR CLASS PHIEU
// void Phieu::input()
// {
//     cout<<"\nNhap ma phieu: ";      fflush(stdin);      gets(ma_phieu);
//     cout<<"\nNhap ngay lap: ";      fflush(stdin);      gets(ngay_lap);
// }
// void Phieu::output()
// {
//     cout<<"\nMa phieu: "<<ma_phieu<<"\t";
//     cout<<"Ngay lap: "<<ngay_lap;
// }

// main()
// {
//     int n;


//     Phieu a;
//     Nha_cung_cap b;

//     a.input();
//     b.input();
//     cout<<"\nNhap so luong hang: "; cin>>n;
//     Hang *hang = new Hang[n];
//     FOR(i,n)
//     {
//         cout<<"\nMat hang thu "<<i+1;
//         hang[i].input();
//         hang[1].tong_tien += hang[i].thanh_tien();
//         cout<<"--------------------------"<<endl;

//     }
//     cout<<setw(30)<<"PHIEU NHAP HANG";
//     a.output();
//     b.output();
//     cout<<"STT"<<setw(10)<<"Ten Hang"<<setw(15)<<"Don gia"<<setw(15)<<"So luong"<<setw(15)<<"Thanh tien"<<endl;
//     FOR(i,n)
//     {
//         cout<<(i+1)<<setw(10);
//         hang[i].output();
//     }
//     cout<<"\n\t"<<"Cong thanh tien: "<<hang[1].tong_tien;
    
// }

/* SU DUNG HAM BAN*/
#include <iostream>
#include <iomanip>

#define FOR(i,n) for(int i=0; i<n; i++)

using namespace std;

class Hang
{
    private:
        float don_gia;
        char ten_hang[20];
        int so_luong;
        float tong_tien;
    public:
        void input();
        void output();
        float thanh_tien();
        friend class Phieu;
};

class Nha_cung_cap
{
    private:
        char ten_ncc[20];
        char ma_ncc[20];
        char dia_chi[20];
    public:
        void input();
        void output();
};

class Phieu
{
    private:
        char ma_phieu[20];
        char ngay_lap[20];
        Hang *hang;
        Nha_cung_cap ncc;
        int n;
 // 1 phieu co nhieu object hang hoa
    public:
        void input();
        void output();

};

/*------------------------------DINH NGHIA CAC PHUONG THUC-----------------------*/
// METhOD FOR CLASS HANG
void Hang::input()
{
    cout<<"\nNhap ten hang: ";      fflush(stdin);      gets(ten_hang);
    cout<<"\nNhap don gia: ";                           cin>>don_gia;
    cout<<"\nNhap so luong: ";                          cin>>so_luong;
}

void Hang::output()
{
    cout<<ten_hang<<setw(15)<<don_gia<<setw(15)<<so_luong<<setw(15)<<thanh_tien()<<endl;
}

float Hang::thanh_tien()
{
    return don_gia*so_luong;
}

// METHOD FOR CLASS NHA CUNG CAP
void Nha_cung_cap::input()
{
    cout<<"\nNhap ten NCC: ";      fflush(stdin);       gets(ten_ncc);
    cout<<"\nNhap ma NCC: ";       fflush(stdin);       gets(ma_ncc);
    cout<<"\nNhap dia chi: ";      fflush(stdin);       gets(dia_chi);
}

void Nha_cung_cap::output()
{
    cout<<"\nMa NCC: "<<ma_ncc<<"\t";
    cout<<"Ten NCC: "<<ten_ncc;
    cout<<"\nDia chi: "<<dia_chi<<endl;
}

// METHOD FOR CLASS PHIEU
void Phieu::input()
{
    cout<<"\nNhap ma phieu: ";      fflush(stdin);      gets(ma_phieu);
    cout<<"\nNhap ngay lap: ";      fflush(stdin);      gets(ngay_lap);

    ncc.input();
    cout<<"\nNhap so luong hang: "; cin>>n;
    hang = new Hang[n];
    FOR(i,n)
    {
        cout<<"\nMat hang thu "<<i+1;
        hang[i].input();
        cout<<"--------------------------"<<endl;

    }
}
void Phieu::output()
{
    cout<<"\t PHIEU NHAP HANG"<<endl;
    cout<<"\nMa phieu: "<<ma_phieu<<"\t";
    cout<<"Ngay lap: "<<ngay_lap;
    ncc.output();
    cout<<"STT"<<setw(10)<<"Ten Hang"<<setw(15)<<"Don gia"<<setw(15)<<"So luong"<<setw(15)<<"Thanh tien"<<endl;
    FOR(i,n)
    {
        cout<<(i+1)<<setw(10);
        hang[i].output();
    }
        double tong_tien=0;
    FOR(i,n)
    {
        tong_tien += hang[i].don_gia*hang[i].so_luong;
    }
    cout<<"\t"<<"Cong thanh tien: "<<(int)tong_tien;
}


main()
{
    Phieu a;
    a.input();
    a.output();
    
}