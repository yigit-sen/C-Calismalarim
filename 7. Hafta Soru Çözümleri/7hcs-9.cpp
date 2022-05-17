#include <iostream>
using namespace std;

class Uye {
    protected:
    string isim;
    int alinangun;
    public:
    friend istream &operator>>(istream &is, Uye &bne);
    virtual void hesapla(){}
};

class Ogrenci: public Uye {
    int ogrencino;
    public:
    friend istream &operator>>(istream &is, Ogrenci &bne);
    void hesapla(){
        if (alinangun>3){
            cout <<"Ogrenci: "<<isim<<" - "<<ogrencino<<" kitabını "<<alinangun-3<< " gun gec getirdi."<<endl;
            cout <<"Odemesi gereken tutar: "<<2*(alinangun-3)<<" lira"<<endl;
        }
        else
            cout <<"Ogrenci: "<<isim<<" - "<<ogrencino<<" kitabını zamanında getirdi."<<endl;
    }
};

istream &operator>>(istream &is, Ogrenci &bne){
    cout <<"Ogrenci ismini giriniz.";
    is >> bne.isim;
    cout <<"Ogrenci numarasini giriniz.";
    is >> bne.ogrencino;
    cout <<"Kitabi aldigi gun sayisini girin.";
    is >> bne.alinangun;
    return is;
}


class Ogretmen: public Uye {
    int personelno;
    public:
    friend istream &operator>>(istream &is, Ogretmen &bne);
    void hesapla(){
        if (alinangun>5){
            cout <<"Ogretmen: "<<isim<<" - "<<personelno<<" kitabını "<<alinangun-5<< " gun gec getirdi."<<endl;
            cout <<"Odemesi gereken tutar: "<<1*(alinangun-5)<<" lira"<<endl;
        }
        else
            cout <<"Ogretmen: "<<isim<<" - "<<personelno<<" kitabını zamanında getirdi."<<endl;
    }
};

istream &operator>>(istream &is, Ogretmen &bne){
    cout <<"Ogretmen ismini giriniz.";
    is >> bne.isim;
    cout <<"Ogretmen personel no giriniz.";
    is >> bne.personelno;
    cout <<"Kitabi aldigi gun sayisini girin.";
    is >> bne.alinangun;
    return is;
}


int main(){
    Uye *kimbu;
    string sor;
    cout <<"ogrenci ici O, hoca icin H girin.";
    cin >> sor;
    if ((sor=="O") || (sor=="o")){
        Ogrenci ogrenci;
        cin >> ogrenci;
        kimbu = &ogrenci;
        kimbu->hesapla();
    }
    else {
        Ogretmen ogretmen;
        cin >> ogretmen;
        kimbu = &ogretmen;
        kimbu->hesapla();        
    }

    return 0;
}
