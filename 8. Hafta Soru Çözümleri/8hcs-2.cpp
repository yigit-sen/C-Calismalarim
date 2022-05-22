#include <iostream>
using namespace std;


template <class A>
void diziyazdir(A dizi[], int N){
    for(int i=0;i<N;i++){
        cout<<"dizi["<<i<<"] = "<<dizi[i]<<endl;
    }
    cout <<endl;
}

int main(){

    string renkler[3]={"Siyah","Beyaz","Mavi"};
    int sayilar[5]={1,3,5,7,9};
    float agirliklar[6]={3.4,6.7,8.9,7.6,10.1,2.9};

    diziyazdir(renkler, 3);
    diziyazdir(sayilar, 5);
    diziyazdir(agirliklar, 6);

    return 0;
}