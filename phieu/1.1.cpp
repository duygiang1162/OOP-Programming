/*BAI TAP DANG PHIEU BAI 1.1 HAUI*/
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cstring>

class Nha_cung_cap
{
    private:
        char ma_nha_cc[30];
        char ten_nha_cc[30];
        char dia_chi[30];
    public:
        void input()
        {
            std::cout << "Nhap ma nha cung cap: ";  std::fgets(ma_nha_cc, 30, stdin);
            std::cout << "Nhap ten nha cung cap: "; std::fgets(ten_nha_cc, 30, stdin);
            std::cout << "Nhap dia chi nha cung cap: "; std::fgets(dia_chi, 30, stdin);
        }
        void output()
        {
            std::cout << std::setw(10) << "Ma NCC:" << ma_nha_cc << std::setw(10) << "Ten NCC:" \
            << ten_nha_cc << std::endl;
            std::cout << std::setw(10) << "Dia chi:" << dia_chi << std::endl;
        }

};

class Hang
{
    private:
        char ten_hang[30];
        float don_gia;
        int so_luong;

    public:
        void input()
        {

            std::cout << std::endl;
            std::cout << "Nhap ten hang: "; fflush(stdin);   gets(ten_hang);
            std::cout << "Nhap don gia cua: " << ten_hang; std::cin >> don_gia;
            std::cout << "Nhap so luong cua: " << ten_hang; std::cin >> so_luong;


            
        }
        void output()
        {
            std::cout << std::setw(15) << ten_hang << std::setw(15) << don_gia \
            << std::setw(15) << so_luong << std::setw(15) << round(thanh_tien()) << std::endl;
        }
        float thanh_tien()
        {
            return don_gia * so_luong;
        }

};

class Phieu
{
    private:
        char ma_phieu[30];
        char ngay_lap[30];
        Nha_cung_cap ncc;
        Hang *hang;
        int n;
        float tong_tien = 0;
    public:
        void input()
        {
            std::cout << "Nhap ma phieu: "; std::fgets(ma_phieu, 30, stdin);
            std::cout << "Nhap ngay lap: "; std::fgets(ngay_lap, 30, stdin);
            ncc.input();
            std::cout << "Nhap so luong hang: "; std::cin >> n;
            hang = new Hang[n];
            for(int i=0; i<n; i++)
            {
                std::cout << "Hang thu: " << i+1 << std::endl;
                hang[i].input();
            }
        }
        void output()
        {
            std::cout << std::setw(10) << "Ma phieu: " << std::setw(20) << ma_phieu \
            << std::setw(20) << "Ngay lap:" << ngay_lap << std::endl;

            ncc.output();

            std::cout << std::setw(15) << "Tenhang" << std::setw(15) << "Don gia" \
            << std::setw(15) << "So luong" << std::setw(15) << "Thanh tien" << std::endl;

            for(int i=0; i<n; i++)
            {
                hang[i].output();
                tong_tien += hang[i].thanh_tien();
            }
            std::cout << std::setw(40) << "Cong thanh tien" << tong_tien << std::endl;
        }


};

int main()
{
    Phieu a;
    a.input();
    std::cout << "==================== PHIEU NHAP HANG ====================" << std::endl;
    a.output();
    
    return 0;
}