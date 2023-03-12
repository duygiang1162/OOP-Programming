#include <iostream>
#include <iomanip>

#define FOR(i,n) for(int i=0; i<n; i++)

using namespace std;

class date
{
    private:
        int day, month, year;
    public:
        void input();
        void output();
};

class nhan_su
{
    private:
        char ma_ns[20];
        char ten[20];
        date ns;
    public:
        void input();
        void output();
};

void date::input()
{
    cout<<"\nNhap ngay thang nam sinh cua ban: (day month year) ";
    cin>>day;
    cin>>month;
    cin>>year;
    cout<<endl;
}
void date::output()
{
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}

void nhan_su::input()
{
    cout<<"\nNhap ten cua ban:  ";      fflush(stdin);      gets(ten);
    cout<<"\nNhap ma nhan su cua ban: "; fflush(stdin);      gets(ma_ns);

    ns.input(); // Do date chi duoc dinh nghia va trien khia trong class nhan_su
}

void nhan_su::output() // Output data ra man hinh
{
    cout<<ten<<setw(14)<<ma_ns<<setw(13);
    ns.output();
}

main()
{
    nhan_su x;
    x.input();

    cout<<"Ten"<<setw(20)<<"Ma Nhan Su"<<setw(15)<<"Date"<<endl;

    x.output();
    

}