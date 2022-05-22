#include <iostream>
using namespace std;

//Tarih ;
class Tarih{
    public:
    int gun, ay, yil;
    Tarih(int _gun, int _ay, int _yil):gun(_gun),ay(_ay),yil(_yil){}
    Tarih();
};
//Tarih bitti


class Urun{

    public:
    string isim;
    double fiyat;
    Urun(string _s, double _fiyat):isim(_s),fiyat(_fiyat){}
    Urun(){}

};

class GidaUrunu:public Urun{
    Tarih sTarih2, uTarih2;
    public:
    GidaUrunu(string _s,double _fiyat,Tarih _ur, Tarih _u):
    Urun(_s,_fiyat),sTarih2(_ur),uTarih2(_u){}
};

class KitapUrunu:public Urun{
    string yazar;
    public:
    KitapUrunu(string _s,double _fiyat,string _y):
    Urun(_s,_fiyat),yazar(_y){}
};

template <class B1, int N>
class Otomat{
    B1 urunler[N];
    public:
    template <class A1>
    void ekle(A1 &eklenecek, int i);
    void goster(){
        for(int i=0;i<5;i++){
            cout <<i<<"- "<<urunler[i].isim<<"  "<<urunler[i].fiyat<<" TL"<<endl;
        }
    }
};
template <class B1, int N>
template <class A1>
void Otomat<B1,N>::ekle(A1 &eklenecek, int i){
    urunler[i]=eklenecek;
}

int main(){
    Otomat <Urun,5> otomat;
    Tarih uTarih(2,3,2012);
    Tarih sTarih(2,3,2013);
    GidaUrunu cikolata("Cikolata",1.5,sTarih,uTarih);
    GidaUrunu su("Su",0.5,sTarih,uTarih);
    KitapUrunu kitap("C++ Kitabı",20.0,"Cigdem Turhan");
    otomat.ekle(cikolata,1);
    otomat.ekle(su,2);
    otomat.ekle(kitap,3);
    otomat.goster();
    return 0;
}