// Example program
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