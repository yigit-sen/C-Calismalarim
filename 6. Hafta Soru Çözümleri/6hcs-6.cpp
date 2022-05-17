#include <iostream>
using namespace std;
class Sporcu{
    public:
    string isim, ulke;
};


class Patenci: public Sporcu{
    float ortalama; 
    float skor[10];
    public:
    friend istream& operator>>(istream &is, Patenci &n);
    friend ostream& operator<<(ostream &os, Patenci &n);
    float ort();
};

istream& operator>>(istream &is, Patenci &n) {
    cout <<"Patencinin ismini giriniz:"<<endl;
    is>>n.isim;
    cout <<"Patencinin ulkesini giriniz:"<<endl;
    is>>n.ulke;
    cout <<"Skorlar, 10 adet giriniz:"<<endl;
    for(int i=0;i<10;i++){
        is >> n.skor[i];
    }
    return is;
}

ostream& operator<<(ostream &os, Patenci &n) {
    os <<n.isim<<endl;
    os <<n.ulke<<endl;
    float toplam;
    for(int i=0;i<10;i++){
        toplam+=n.skor[i];
    }
    os <<"Ortalama:"<< toplam/10;
    return os;
}

int main(){  
    Patenci ahmet;
    cin >> ahmet;
    cout << ahmet;

    return 0;
}