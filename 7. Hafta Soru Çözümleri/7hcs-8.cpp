#include <iostream>
using namespace std;

class HayalSirketi{
    public: 
    virtual void hesap(){};
};

class Reklam: public HayalSirketi {
    int sure;
    char zamandilimi;
    public:
    friend istream &operator>>(istream &is, Reklam &bne);
    void hesap(){
        if (zamandilimi=='S')
            cout << "Reklamin fiyati: "<<sure*20000<<" lira";
        else if (zamandilimi=='A')
            cout << "Reklamin fiyati: "<<sure*40000<<" lira";        
    }
};


class Dizi: public HayalSirketi {
    int bolum, uzunluk;
    public:
    friend istream &operator>>(istream &is, Dizi &bne);
    void hesap(){
        if (uzunluk==30)
            cout << "Dizinin fiyati: "<<bolum*50000<<" lira";
        else if(uzunluk==60)
            cout << "Dizinin fiyati: "<<bolum*100000<<" lira";
    }
};


istream &operator>>(istream &is, Reklam &bne){
    cout <<"Reklamin suresini gierin:";
    is >> bne.sure;
    cout <<"Reklamin zaman dilimi (S/A)";
    is >> bne.zamandilimi;
}

istream &operator>>(istream &is, Dizi &bne){
    cout <<"Dizinin bolum sayisini gierin:";
    is >> bne.bolum;
    cout <<"Dizinin uzunludugunu girin.";
    is >> bne.uzunluk;
}


int main(){
    HayalSirketi *hayallerim;
    string sor;
    cout <<"Reklam icin(R), dizi film icin (D) girin:";
    cin >> sor;
    if ((sor=="R") || (sor=="r")){
        Reklam reklam;
        cin >> reklam;
        hayallerim=&reklam;
        hayallerim->hesap();
    }

    else {
        Dizi dizi;
        cin >> dizi;
        hayallerim=&dizi;
        hayallerim->hesap();
    }


    return 0;
}
