#include<iostream>
#include<string>


class Phu_nu

{
    public:
        Phu_nu()
        {}
        Phu_nu(const std::string &ht,int t, bool z = true) // Constructer
            :ho_ten(ht), con_zin(z), tuoi(t)
        {}

        ~Phu_nu() // Disconstructer
        {
            std::cout << "chia tay" << ho_ten << std::endl;
        }
        std::string choi_nhac_cu(std::string nhac_cu)
        {
            return "AAAAAAAAAA";
        }
        void trang_diem()
        {}
        void va_zin()
        {
            if(tuoi < 25)
            {
                con_zin = true;
            }
        }
        void show_hang()
        {
            std::cout << ho_ten << " " << (con_zin ? "con zin" : "mat zin") << std::endl;
        }   
    protected:
        std::string ho_ten;
        bool con_zin;
        int tuoi;
};
class Gai_ngoan : public Phu_nu // Tinh ke thua
{
    public:
    Gai_ngoan(const std::string &ht,int t, bool z = true) // Constructer
            :Phu_nu(ht, t, z)
        {}
    void noi_tro()
    {
        std::cout << ho_ten << " " << std::endl; 
    }
    std::string choi_nhac_cu(std::string nhac_cu)
    {
        return "ooooooooooooo";
    }

};
class Gai_hu : Phu_nu // tinh ke thua
{
    public:
    Gai_hu(const std::string &ht,int t, bool z = true) // Constructer
            :Phu_nu(ht, t, z)
        {}
    void di_bar()
    {}
    
};
int main()
{
    Gai_ngoan *thao = new Gai_ngoan("mazia ozawa",20, false); // Cap phat dong
    thao->choi_nhac_cu("ken");
    thao->va_zin();
    thao->show_hang();
    thao->noi_tro();


    return 0;
}