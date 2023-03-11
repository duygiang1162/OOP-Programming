#include <iostream>
#include <iomanip>

#define FOR(i,n) for(int i=0; i<n; i++)

using namespace std;

class book
{
    private:
        char ten_sach[20];
        char ma_sach[20];
        char nxb[20];
        int so_trang, gia_tien;
    public:
        void input()
        {
            cout<<"\nNhap ten sach: ";      fflush(stdin);  gets(ten_sach);
            cout<<"\nNhap ma sach: ";       fflush(stdin);  gets(ma_sach);
            cout<<"\nNhap nha xb: ";        fflush(stdin);  gets(nxb);
            cout<<"\nNhap so trang: ";                      cin>>so_trang;
            cout<<"\nNhap gia tien: ";                      cin>>gia_tien;
        }
        void output()
        {
            cout<<ten_sach<<setw(10)<<ma_sach<<setw(10)<<nxb<<setw(10)<< \
            so_trang<<setw(10)<<gia_tien<<endl;
        }
};

main()
{
    int n;
    cout<<"\nNhap so luong sach: ";     cin>>n;
    
    book *a = new book[n];
    FOR(i,n)
    {
        cout<<"\nNhap thong tin cho sach thu "<<i+1<<endl;
        a[i].input();
        cout<<"----------------------------";
    }
    cout<<"--------------------------------------------------"<<endl;
    FOR(i,n)
    {
        a[i].output();
    }

}
