#include <iostream>
#include <fstream>
using namespace std;

class Ders{
    public:
    string derskodu;
    int sinifmevcudu;
    int *sinif;
    void dersbul(int _no){
        for (int n=0;n<sinifmevcudu-2;n++){
            int a=sinif[n];
            if (a==_no){
                cout<<a<<" numarali ogrenci "<<derskodu<<" dersini aliyor.";
            }
            }
        }


    void ata(string ders, int mevcud, int numaralar[]){
        derskodu=ders;
        sinifmevcudu=mevcud;
        sinif=numaralar;
    }
};

int main(){
    Ders derslerim;
    fstream dersler("ders.txt");
    int byte=0;
    string ders;

    int mevcud;
    cout<<"Ogrenci numarası girin:";
    int _no;
    cin>>_no;
    while (!dersler.eof()){
        dersler>>ders>>mevcud;
        int nolar[mevcud];
        for(int n=0;n<mevcud;n++){
            dersler>>nolar[n];
        }
        derslerim.ata(ders,mevcud,nolar);
    }
    



    derslerim.dersbul(_no);

    dersler.close();

}
