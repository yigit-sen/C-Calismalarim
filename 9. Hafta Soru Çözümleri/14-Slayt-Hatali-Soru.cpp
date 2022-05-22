#include <iostream>
using namespace std;
class S
{
    protected:
        int a;
    public:
        S(int x){a=x;}
        void r(){cout.width(5); cout.fill('&'); cout<<a<<endl;}

};

class M: public S{
    int a;
    public:
        M(int x, int y):S(x){a=y;}
        void r(){
            cout.width(4); cout.fill('?');
            cout<<a<<endl;
        }
};

int main(){
    S * t[2];
    t[0]=new S(10);
    t[0]->r();
    t[1]=new M(15,18);

    
    t[1]->r(); 

    //Gösterge olduğundan ve S class'ındaki r fonksiyonu sanal olarak tanımlanmadığından
    //derleyici direkt olarak S class'ındaki r fonksiyonunu çalıştırır.
    //Yani slaytta verilen çıktının oluşabilmesi için S class'ına ait r fonksiyonunu
    //virtual olarak tanımlanması gerekiyor.

    delete [] t;
    return 0;
}


//Kodun bu haliyle oluşan doğru çıktı:
//&&&10
//&&&15