#include <iostream>
using namespace std;
class Dugme {
    public:
    virtual void cal() = 0;
};
class UzaktanKumanda {
    public:
    Dugme *ac, *kapa;
    void acmaKomutuAta(Dugme *x){
        ac=x;
    }
    void kapamaKomutuAta(Dugme *x){
        kapa=x;
    }
    void acti(){
        ac->cal();
    }
    void kapadi(){
        kapa->cal();
    }
};

class TelevizyonAcKomutu: public Dugme{
    public:
    void cal(){
        cout <<"Televizyon aciliyor..."<<endl;
    }
};

class TelevizyonKapaKomutu: public Dugme{
    public:
    void cal(){
        cout <<"Televizyon kapaniyor..."<<endl;
    }
};

//otopark

class OtoparkKapiAcKomutu: public Dugme{
    public:
    void cal(){
        cout <<"Otopark aciliyor..."<<endl;
    }
};

class OtoparkKapiKapaKomutu: public Dugme{
    public:
    void cal(){
        cout <<"Otopark kapaniyor..."<<endl;
    }
};

int main(){
    UzaktanKumanda kumanda;
    TelevizyonAcKomutu tvAcKomutu;
    TelevizyonKapaKomutu tvKapaKomutu;
    kumanda.acmaKomutuAta(&tvAcKomutu);
    kumanda.kapamaKomutuAta(&tvKapaKomutu);
    kumanda.acti();
    kumanda.kapadi();
    OtoparkKapiAcKomutu kapiAcKomutu;
    OtoparkKapiKapaKomutu kapiKapaKomutu;
    kumanda.acmaKomutuAta(&kapiAcKomutu);
    kumanda.kapamaKomutuAta(&kapiKapaKomutu);
    kumanda.acti();
    kumanda.kapadi();

    return 0;
}