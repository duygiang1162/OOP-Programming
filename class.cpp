#include<bits/stdc++.h>

using namespace std;

class student
    {
        public:
            void input();
            void output();
            float average();
        private:
            char name[20];
            int age;
            char idname[20];
            float toan, ly, hoa;
    };

void student::input()
{
    cout<<"Name: "; fflush(stdin);  cin>>name;
    cout<<"Age: ";                  cin>>age;
    cout<<"ID Name:";  fflush(stdin); cin>>idname;
    cout<<"Toan: ";                 cin>>toan;
    cout<<"Ly: ";                   cin>>ly;
    cout<<"Hoa: ";                  cin>>hoa;
}

void student::output()
{
    cout<<setw(15)<<name<<setw(20)<<idname<<setw(15)<<age<<setw(15)\
    <<toan<<setw(15)<<hoa<<setw(15)<<ly<<setw(15)<<average()<<endl;
}

float student::average()
{
    return (toan+ ly + hoa)/3;
}

int main()
{
    int n;
    cout<<"So luong sinh vien: ";   cin>>n;
    student *a; // Khai bao a kieu du lieu student
    a =new student[n]; // Cap phat bo nho dong

    cout<<setw(45)<<"Bang Thong Ke"<<endl;
    // Vong lap nhap thong tin
    for(int i=0; i<n; i++)
    {
        cout<<"Sinh vien: "<<i+1<<endl;
        a[i].input();
    }
    // In ra thong tin cot/hang
    cout<<setw(15)<<"Name"<<setw(20)<<"Id name"<<setw(15)<<"Age"<<setw(15)\
    <<"Toan"<<setw(15)<<"Hoa"<<setw(15)<<"Ly"<<setw(15)<<setw(15)<<"Tb"<<endl;

    // Xuat mang in ra thong tin sinh vien
    for(int i=0; i<n; i++)
    {
        a[i].output();
    }
}