#include <iostream>
using namespace std;

class HastaFatura {
    protected:
    int ilacMasrafi2, hastanePayi2;
    string isim2;
    public:
    HastaFatura(string _isim, int _hastanepayi, int _ilacmasrafi):
        isim2(_isim),ilacMasrafi2(_ilacmasrafi),hastanePayi2(_hastanepayi){}
    HastaFatura(){};
    virtual void odeme();
};

void HastaFatura::odeme(){
    cout <<"Hasta ismi: "<<isim2<<"  --- Toplam ucret: "<<hastanePayi2+ilacMasrafi2<<" Lira"<<endl;
}

class SigortaliHastaFatura: public HastaFatura {
    protected:
    int ilacMasrafi2, hastanePayi2;
    string sirket2;
    string isim2;
    public:
    SigortaliHastaFatura(string _isim, int _hastanepayi, int _ilacmasrafi, string _sirket):
        isim2(_isim),ilacMasrafi2(_ilacmasrafi),hastanePayi2(_hastanepayi),sirket2(_sirket){}
    void odeme();
};
void SigortaliHastaFatura::odeme(){
    cout <<"Hasta ismi: "<<isim2<<"  --- Sigorta: "<<sirket2<<" --- Toplam Ucret: "
    <<ilacMasrafi2*0.2 <<endl;
}


int main(){
    char s;
    string isim, sirket;
    int ilacMasrafi;
    int hastanePayi;
    HastaFatura *faturalar[20];
    for (int i=0;i<20;i++){
        cout <<"Hasta sigortali mi? (E/H)";
        cin>>s;
        cout<<"Hastanin ismi:";
        cin>>isim;
        cout <<"Hastane ucreti:";
        cin>>hastanePayi;
        cout<<"ilac masrafi:";
        cin>>ilacMasrafi;
        if (s=='E'){
            cout<<"sigorta sirketi";
            cin>>sirket;
            HastaFatura *p=new SigortaliHastaFatura(isim,hastanePayi,ilacMasrafi,sirket);
            faturalar[i]=new SigortaliHastaFatura(isim,hastanePayi,ilacMasrafi,sirket);
        }
        else {
            faturalar[i]=new HastaFatura(isim, hastanePayi, ilacMasrafi);
        }
            
        faturalar[i]->odeme();

    }
    return 0;
}