#include <iostream>
#include <fstream>
using namespace std;

class Islem{
    int sayi1, sayi2;
    char oper;
    public:
    void ata(int _sayi1, int _sayi2, char _oper){
        sayi1=_sayi1;
        sayi2=_sayi2;
        oper=_oper;
    }
    void hesapla(){

        if (oper=='+'){
            cout<<sayi1<<" + "<<sayi2<<" = "<<sayi1+sayi2<<endl;
        }
        else if (oper=='-'){
            cout<<sayi1<<" - "<<sayi2<<" = "<<sayi1-sayi2<<endl;
        }
        else if (oper=='*'){
            cout<<sayi1<<" * "<<sayi2<<" = "<<sayi1*sayi2<<endl;
        }
        else if (oper=='/'){
            cout<<sayi1<<" / "<<sayi2<<" = "<<sayi1/sayi2<<endl;
        }
    
    }
};

int main(){
    ifstream sayilar("islenen.dat");
    ifstream operatorler("operator.txt");
    Islem sayilarim[4];

    for (int i=0;i<4;i++){
    int _sayi1, _sayi2;
    char _oper;
    sayilar>>_sayi1>>_sayi2;
    operatorler>>_oper;
    sayilarim[i].ata(_sayi1, _sayi2, _oper);
    sayilarim[i].hesapla();
    }

    return 0;
}