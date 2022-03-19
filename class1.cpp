#include <iostream>
using namespace std;

class Oda {
   public:
    double boy;
    double en;
    double yukseklik;
    double hacimHesapla();
    void sonuc(double, double, double);
};
double Oda::hacimHesapla() {
    return boy * en * yukseklik;
}
void Oda::sonuc(double boy,double en,double yukseklik){
    Oda salon;
    cout<<"Sırasıyla odanın boyunu, enini ve yüksekliğini giriniz: "<<endl;
    cin>>salon.boy>>salon.en>>salon.yukseklik;

    cout << "Odanın Hacmi =  " << salon.hacimHesapla() << endl;
}

int main() {
    Oda nesne_salon;
    nesne_salon.sonuc(nesne_salon.boy,nesne_salon.en,nesne_salon.yukseklik);

    return 0;
}
