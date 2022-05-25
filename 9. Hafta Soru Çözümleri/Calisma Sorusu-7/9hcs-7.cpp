#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream notlar("gir.txt");
    int _nosu, _vize1, _vize2, _final;

    while (!notlar.eof()){
        notlar>>_nosu>>_vize1>>_vize2>>_final;
        
        if (_vize1>100 || _vize2>100){
            cout<<"Ogrenci No: "<<_nosu<<" Yanlis not girildi: "<<_vize1<<" "<<_vize2<<endl;
        }
        else {
        cout<<"Ogrenci No: "<<_nosu<<" Ortalama: "<<_vize1*0.3+_vize2*0.3+_final*0.4<<endl;
        }
    }   
    return 0;
}