#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream sayilar("sayilar.txt");
    int i=1;

    while(!sayilar.eof()){

    int s1, s2, s3, s4, s5, s6;
    sayilar>>s1>>s2>>s3>>s4>>s5>>s6;

    if ((s1<s2) && (s2<s3) && (s3<s4) && (s4<s5) && (s5<s6))
        cout <<i<<". satir sirali yazilmistir."<<endl;
    else 
        cout <<i<<". satir sirali yazilmamistir."<<endl;
    
    i = i+1;

    }

    return 0;
}