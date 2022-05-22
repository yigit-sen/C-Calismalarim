#include <iostream>
using namespace std;

template <class T1, class T2>
class Cift{
    T1 bir;
    T2 iki;
    public:
        Cift(T1 a,T2 b):bir(a),iki(b){}
        void yaz();
};

template <class T1, class T2>
void Cift<T1,T2>::yaz(){
    cout<<"("<<bir<<","<<iki<<")"<<endl;
}

int main(){
    Cift <double, char> txt(2.5,'c');
    txt.yaz();

    Cift <string, int> txt2("Ali",3000);
    txt2.yaz();
    return 0;
}