#include <iostream>
using namespace std;
class Atlet{
    public:
    string isim, cinsiyet, ulke;
};

class YuzMetre: public Atlet {
    int bitis;
    public:
    static string kazananisim;
    static int kazananbitis;
    friend istream& operator>>(istream &is, YuzMetre &n);
    void kazanan();
    void yaz();
};

int YuzMetre::kazananbitis=50000000;
string YuzMetre::kazananisim="yigit";
void YuzMetre::yaz(){
    cout <<"Kazanan Kişi: "<<kazananisim;
    cout <<"Kazanan bitişi: "<<kazananbitis;
}
void YuzMetre::kazanan(){
    if (kazananbitis>bitis){
        kazananbitis=bitis;
        kazananisim=isim;
    }
}


istream& operator>>(istream &is, YuzMetre &n) {
    cout <<"Atletin ismini giriniz:"<<endl;
    is>>n.isim;
    cout <<"Patencinin ulkesini giriniz:"<<endl;
    is>>n.ulke;
    cout <<"Patencinin cinsiyetini giriniz:"<<endl;
    is>>n.cinsiyet;
    cout <<"Patencinin bitiriş zamanını giriniz:"<<endl;
    is>>n.bitis;
    return is;
}


int main(){
    YuzMetre atletler[3];
    for(int i=0;i<3;i++){
        cin>>atletler[i];
    }
    for(int i=0;i<3;i++){
        atletler[i].kazanan();
    }
    atletler[1].yaz();
    return 0;

}