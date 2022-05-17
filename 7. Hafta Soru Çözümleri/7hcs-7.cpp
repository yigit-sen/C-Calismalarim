#include <iostream>
using namespace std;
class Oyun{
    protected:
    string isim;
    public:
    virtual void oyna()=0;
};

class Oyunkonsolu {
    Oyun *oyun;
    public:
    void basla(){
        oyun->oyna();
    }
    void bitir(){
        cout << "Tüm oyunlar kapatildi."<<endl;
    }
    void oyunAta(Oyun *oyun2){
        oyun = oyun2;
    }
};

class Mario: public Oyun {
    public:
    void oyna(){
        cout <<"mario baslatiliyor."<<endl;
    }
};

class Tetris: public Oyun {
    public:
    void oyna(){
        cout <<"tetris baslatiliyor."<<endl;
    }
};

class Bloklar {
    public:
    void bloklarbasla(){
        cout <<"bloklar baslatiliyor."<<endl;
    }
};


int main(){
    Oyunkonsolu konsol;
    Mario mario;
    Tetris tetris;
    Bloklar blok;
    konsol.oyunAta(&mario);
    konsol.basla();
    konsol.oyunAta(&tetris);
    konsol.basla();
//?    konsol.oyunAta(&blok); 
//?    konsol.basla();
    konsol.bitir();

    return 0;
}