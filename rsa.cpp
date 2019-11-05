#include<iostream>
#include<math.h>
using namespace std;

int gcd(int a, int b) {
   int t;
   while(1) {
      t= a%b;
      if(t==0)
      return b;
      a = b;
      b= t;
   }
}
int main() {

   double p;
   double q;
   cout<<"Enter  first prime number:";
   cin>>p;
   cout<<"Enter  second prime number:";
   cin>>q;

   double n=p*q;
   double track;
   double totient= (p-1)*(q-1);
   double e=7;

   while(e<totient) {
      track = gcd(e,totient);
      if(track==1)
         break;
      else
         e++;
   }

   double d1=1/e;
   double d=fmod(d1,totient);
   double message = 9;
   double c = pow(message,e);
   double m = pow(c,d);
   c=fmod(c,n);
   m=fmod(m,n);
   cout<<"Original Message = "<<message;
   cout<<"\n"<<"p = "<<p;
   cout<<"\n"<<"q = "<<q;
   cout<<"\n"<<"n = pq = "<<n;
   cout<<"\n"<<"totient = "<<totient;
   cout<<"\n"<<"e = "<<e;
   cout<<"\n"<<"d = "<<d;
   cout<<"\n"<<"Encrypted message = "<<c;
   cout<<"\n"<<"Decrypted message = "<<m;
   return 0;
}
