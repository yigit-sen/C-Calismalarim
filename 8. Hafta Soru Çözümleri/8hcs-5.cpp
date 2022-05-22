#include <iostream>
using namespace std;

template <class A>
class Kare {
    A kenar;
    public:
        void kenarata(A k){kenar=k;}
        A kenaral(){return kenar;}
        A alan();
};

template <class A>
A Kare<A>::alan(){
    return kenar*kenar;
}

int main(){
    Kare <int> kare1;
    kare1.kenarata(2);
    cout<<"int olanin alani= "<<kare1.alan()<<endl;

    Kare <double> kare2;
    kare2.kenarata(2.5);
    cout<<"double olanin alani= "<<kare2.alan()<<endl;

    return 0;
}