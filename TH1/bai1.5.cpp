#include <iostream>
#include <iomanip>

#define FOR(i,n) for(int i=0; i<n; i++)

using namespace std;

class reorder
{
    private:
        int n;
        char number[1000];
        int temp;
    public:
        void input();
        void REORDER();
        void output();
};

void reorder::input()
{
    cout<<"\nNhap do dai cua mang: ";   cin>>n;
    FOR(i,n)
    {
        cout<<"\nPhan tu thu "<<i+1<<": ";  cin>>number[i]; cout<<endl;
    }
}

void reorder::REORDER()
{
    FOR(i,n)
    {
        for(int j=i+1; j<n; j++)
        {
            if(number[j] < number[i])
            {
                temp = number[j];
                number[j]=number[i];
                number[i]=temp;
            }
        }
    }
}
void reorder::output()
{
    cout<<"\nMang sap xep tu be den lon"<<endl;
    FOR(i,n)
    {
        cout<<number[i]<<" ";
    }
}
main()
{
    reorder a;
    a.input();
    a.REORDER();
    a.output();
}