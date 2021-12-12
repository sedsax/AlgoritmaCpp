/*
Kullanıcıdan a ve n pozitif tam sayılarını (0<a<=10, 0<n<=10) alarak a^n sayısını aşağıdaki algoritma ile hesaplayabilen C++ kodunu yazınız.
Algoritma:
  1. n sayısını 2 tabanında yaz.
  2. Başlangıçta çarpım=1 olsun.
  3. n sayısının 2 tabanındaki yazılımının rakamlarına soldan sağa tara ve 1 gördüğünde çarpımın 
    karesini al, 
  4. a ile çarp ve sonucu çarpıma ata. 0 gördüğünde çarpımın karesini al.
Kodunuz çıktı olarak,
• n sayısının 2 tabanındaki halini ve
• p sayısının her aşamadaki halini (en son sonuç olacak şekilde)ekrana yazdırmalıdır.
*/

// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
 int a,n,j,i;
 int p=1;
 int dizi[i];
 cin>>a>>n;
 if((0<a && a<=10) && (0<n && n<=10)){
     i=0;
    while(n > 0){
        dizi[i]=n%2;
        n=n/2;
        i++;
    }
    
    for(j=i-1; j>=0; j--){
     cout<<dizi[j];
    }
    cout<<endl<<p<<endl;
 
    for(j=i-1; j>=0; j--){
        if(dizi[j]==1) {p=p*p*a;}
        
        else {p=p*p;}
        
        cout<<p<<endl;
    }
 }
 return 0;
}
