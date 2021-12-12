/*
Problem: Numaraları sırasıyla 1, 2 3, ..., N olan N tane kapı vardır ve başlangıçta her biri kapalıdır. Bu 
kapıların yanından N defa geçilerek her defasında bazı kapılar üzerinde işlem yapılacaktır. İşlem açık kapıyı 
kapatmak, kapalı kapıyı açmak demektir. Kapıların yanından k. Defa geçildiğinde sadece ve sadece 
numarası k ya bölünebilen kapılar üzerinde işlem yapılacaktır. Yani 1. defa geçildiğinde tüm kapılar 
açılacak (hepsinin numarası bir ile bölünebildiğinden), 2. defa geçildiğinde numarası çift olanlar 
kapatılacak, 3. defa geçildiğinde numarası 3, 6, 9, ... olanlardan açık olanlar kapatılacak, kapalı olanlar 
açılacak ve böyle N defa devam edilecek. Son defa geçildikten sonra hangi kapılar açık olacaktır?
*/

// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
 int i,j,n;
 cin>>n;
 int dizi1[n];
 bool dizi2[n];
 for(i=1; i<=n; i++){
    dizi1[i-1]=i;   
    dizi2[i-1]=false;   //kapılar ilk başta kapalı
 }
 
 for(i=1; i<=n; i++){
    for(j=1; j<=i; j++){
        if(dizi1[i-1]%j==0 && dizi2[i-1]==false){
            dizi2[i-1]=true;
            
        }
        else if(dizi1[i-1]%j==0 && dizi2[i-1]==true){
            dizi2[i-1]=false;
           
        }
    }
 }
 
 for(i=1; i<=n; i++){
     //cout<<dizi1[i-1]<<" "; 
     //cout<<dizi2[i-1]<<" ";
     if(dizi2[i-1]==true){
        cout<<dizi1[i-1]<<" ";
     }
 }
}
