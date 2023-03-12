#include <iostream>
#include <iomanip>

#define FOR(i,n) for(int i=0; i<n; i++)

using namespace std;

class minmax
{
    private:
        double max;
        double min;
        int n;
        float number[1000];
    public:
        void input();
        void output();
        void answer();
};

void minmax::input()
{
    cout<<"\nNhap do dai cua mang: ";   cin>>n;
    FOR(i,n)
    {
        cout<<"\nNhap gia tri phan tu thu "<<i+1<<":"; cin>>number[i];
    }
}

void minmax::answer()
{
    // FIND MIN
    min=number[0];
    FOR(i,n)
    {
        if(number[i] < min)
            min=number[i];
    }
    // FIND MAX
    FOR(i,n)
    {
        if(number[i] > max)
            max=number[i];
    }
}

void minmax::output()
{
    cout<<"\nPhan tu lon nhat trong mang la: "<<max;
    cout<<"\nPhan tu nho nhat trong mang la: "<<min;
}

main()
{
    minmax a;
    a.input();
    a.answer();
    a.output();
}
