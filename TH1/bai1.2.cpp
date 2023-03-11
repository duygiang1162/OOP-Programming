#include<iostream>
#include<iomanip>
#define FOR(i,n) for(int i=0; i<n; i++)

using namespace std;

class hcn
{
    private:
        float dai,rong;
    public:
        void nhap();
        void ve();
        float dientich();
        float chuvi();

};

void hcn::nhap()
{
    cout<<"\nNhap chieu dai cua hinh chu nhat: ";   cin>>dai;
    cout<<"\nNhap chieu rong cua hinh chu nhat: ";   cin>>rong;
}

void hcn::ve()
{
    // for(int i=0; i<rong; i++)
    // {
    //     for(int j=0; j<dai; j++)
    //     {
    //         if((i==0 && j<dai) || (i==rong-1) && j<dai)
    //         {
    //             cout<<"*";
    //             if(i==0 && j==dai-1)
    //             cout<<endl;
    //         }
    //         else if(i<rong && j==dai-1)
    //             cout<<"*";
    //         else
    //             cout<<" ";
    //     }

       
    // }

    FOR(i,rong)
    {
        FOR(i,dai)
        cout<<"*";
    cout<<endl;
    }
}

float hcn::chuvi()
{
    return 2*(dai+rong);
}
float hcn::dientich()
{
    return dai*rong;
}
main()
{
    hcn a;
    a.nhap();
    a.ve();
    cout<<"\nDien tich cua hinh chu nhat: "<<a.dientich();
    cout<<"\nChu vu cua hinh chu nhat: "<<a.chuvi();
}