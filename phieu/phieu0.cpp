/*BAI TAP VI DU MINH HOA TRONG DCBG VA BAI1.1 YOUTUBE HOANG NHAN*/
#include <iostream>
#include <iomanip>
#include <string>

/////////////////////////// PHONG //////////////////////////////////
class Phong
{
    public:
        void input();
        void output();
    private:
        char ten_phong[100];
        char truong_phong[100];
        char ma_phong[100];
};

void Phong::input() // THAO TAO NHAP XUAT
{
    std::cout << "Ma phong: " << std::fgets(ma_phong, 100, stdin);
    std::cout << "Ten phong: " << std::fgets(ten_phong, 100, stdin);
    std::cout << "Truong phong: " << std::fgets(truong_phong, 100, stdin);
    
}

void Phong::output()
{
    std::cout << "Kiem ke tai phong: " << ten_phong;
    std::cout << "Ma phong: " << ma_phong << std::endl; 
    std::cout << "Truong phong: " << truong_phong << std::endl;
}

/////////////////////////// NHAN VIEN ///////////////////////////////
class Nhan_vien 
{
    public:
        void input();
        void output();
    private:
        char chuc_vu[100];
        char ten_nv[100];
};

void Nhan_vien::input() // THAO TAC NHAP XUAT
{
    std::cout << "Ten nhan vien: " << std::fgets(ten_nv, 100, stdin);
    std::cout << "Chuc vu: " << std::fgets(chuc_vu, 100, stdin);
}

void Nhan_vien::output()
{
    std::cout << "Nhan vien kiem ke: " << ten_nv;
    std::cout << "Chuc vu: " << chuc_vu;
}


//////////////////////// TAI SAN ////////////////////////////
class Tai_san 
{
    public:
        void input();
        void output();
    protected:
        int so_luong;
        char ten_tai_san[100];
        char tinh_trang[100];
        friend class Phieu;
};

void Tai_san::input()
{
    std::cout << "Ten tai san: "; std::fgets(ten_tai_san, 100, stdin);
    std::cout << "Tinh trang: "; std::fgets(tinh_trang, 100, stdin);
    std::cout << "So luong: "; std::cin >> so_luong;

}

void Tai_san::output()
{
    std::cout << ten_tai_san << std::setw(10) << so_luong \
    << std::setw(10) << tinh_trang << std::endl;
}

//////////////////////// PHIEU ///////////////////
class Phieu 
{
    private:
        char ma_phieu[100];
        char ngay[100];
        Phong *p;
        Nhan_vien *nv;
        Tai_san *t;
        int n;

    public:
        void input();
        void output();
};

void Phieu::input()
{
    std::cout << "Ma phieu: "; std::fgets(ma_phieu, 100, stdin);
    std::cout << "Ngay lap: "; std::fgets(ngay, 100, stdin);
    p->input();
    nv->input();
    
    std::cout << "Nhap so tai san cua phieu: "; std::cin>>n;
    for(int i=0; i<n; i++)
    {
        std::cout << "Tai san thu: " << i+1 << std::endl;
        t->input();

    }
}

void Phieu::output()
{
    std::cout << std::setw(30) << "PHIEU KIEM KE TAI SAN" << std::endl;
    std::cout << "Ma phieu: " << ma_phieu << "Ngay kiem ke: " \
    << ngay << std::endl;
    p->output(); // Truy cap vao phuong thuc Public
    nv->output();
    std::cout << "Ten tai san" << std::setw(5) << "So luong" << \
    std::setw(5) << "Tinh trang" << std::endl;
    for(int i=0; i<n; i++)
    {
        t->output();
    }
    std::cout << "Tong so tai san da kiem ke: " << n;
    int Tong_sl=0;
    for(int i=0; i<n; i++)
    {
        Tong_sl+=t[i].so_luong;
    }
    std::cout << "Tong so luong: " << Tong_sl;

}


int main()
{
    Phieu x;
    x.input();
    x.output();
}