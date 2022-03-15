#include <iostream>
using namespace std;

int sayilar_toplami(int sayi1, int sayi2){
    int toplam=sayi1+sayi2;
    return toplam;
}

void tekrar_yaz(char harf, int tekrar_sayisi){
    for(int i=1; i<=tekrar_sayisi; i++){
        cout<<harf<<" ";
    }
    cout<<endl;
}

int begeniler_toplami(int begeniler[6]){//6 tane fotoğraf paylaştığını kabul ediyorum
    int toplam=0;
    for(int i=0; i<6; i++){
        toplam+=begeniler[i]; //Her bir fotoğrafın beğeni sayısını topluyorum
    }
    return toplam;
}

int main()
{
    //fonksiyolar süreli ödev1
    cout<<"(soru1 in cevabi) Girilen iki sayinin toplami = "<<sayilar_toplami(23,42)<<endl;

    //fonksiyonlar süreli ödev2
    cout<<"(soru2 nin cevabi) Girilen harfi girilen sayi kadar yazdir! ";
    tekrar_yaz('B',9);

    //fonksiyonlar süreli ödev3
    cout<<"(soru3 un cevabi) Her bir fotograf icin dizi halinde tutulan begeni sayilari toplami: ";
    int dizi[6]={7,3,6,4,55,75};
    cout<<begeniler_toplami(dizi);


    return 0;
}
