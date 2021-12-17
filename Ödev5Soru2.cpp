/*
Sizden ikisi de aynı zamanda sıfıra eşit olmayan 2 negatif olmayan tam sayının ortak bölenlerinin en 
büyüğünü (OBEB) Eucild algoritmasını modifiye ederek bulmanız istenmektedir. Bunun için aşağıdaki 
özellikleri kullanmanız gerekmektedir.
• 1. Kural: a ve b çift ise OBEB(2a, 2b)=2.OBEB(a,b)
• 2. Kural: a çift b tek ise OBEB(2a,b)=OBEB(a,b)
• 3. Kural: OBEB(a,0)=a
• 4. Kural: a≥b ise OBEB(a,b)=OBEB(b, a-b)
• 5. Kural: OBEB(a, b)=OBEB(b, a)
Kodunuzda bölme işlemi olarak sadece 2 ile bölmeye izin verilmektedir.
*/

#include <iostream>
#include <string>
using namespace std;

int obeb(int a, int b) {
     if (a%2==0 && b%2==0) {
         cout<<"1.kural"<<endl;
         return 2*obeb(a/2, b/2);
     } 
     else if (a%2==0 && b%2==1) {
         cout<<"2.kural"<<endl;
         return obeb(a/2, b);
     } 
     else if (b == 0) {
         cout<<"3.kural"<<endl;
         return a;
     } 
     else if (a >= b) {
         cout<<"4.kural"<<endl;
         return obeb(b,a-b);
     } 
     else {
         cout<<"5.kural"<<endl;
         return obeb(b,a);
     }
}
int main() {
 int a,b;
 cin>>a>>b;
 cout<<obeb(a,b);
}
