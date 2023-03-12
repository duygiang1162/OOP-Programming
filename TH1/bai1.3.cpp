#include <iostream>
#include <iomanip>

#define FOR(i,n) for(int i=0; i<n; i++)
using namespace std;

class product
{
    private:
        char ten_hang[20];
        char ma_hang[20];
        int don_gia;
        int so_luong;
    public:
        void input()
        {
            cout<<"\nNhap ten hang: ";      fflush(stdin);  gets(ten_hang);
            cout<<"\nNhap ma hang: ";       fflush(stdin);  gets(ma_hang);
            cout<<"\nDon gia cua mat hang: ";               cin>>don_gia;
            cout<<"\nSo luong hang: ";                      cin>>so_luong;
        }
        void output()
        {
            cout<<setw(10)<<ten_hang<<setw(15)<<ma_hang<<setw(15)<<don_gia \
            <<setw(15)<<so_luong<<endl;
        }
};

main()
{
    cout<<setw(30)<<"PHIEU HANG"<<endl;
    cout<<"==================================";
    int n;
    cout<<"\nNhap so hang hoa: ";   cin>>n;
    
    product *a;
    a=new product[n];

    FOR(i,n)
    {
        cout<<"Nhap thong tin mat hang "<<i+1<<endl;
        a[i].input();
    }
    cout<<"---------------------------------"<<endl;
        cout<<setw(10)<<"Ten hang"<<setw(15)<<"Ma hang"<<setw(15)<<"Don gia" \
        <<setw(15)<<"So luong"<<endl;

    FOR(i,n)
    {
        a[i].output();
    }


}