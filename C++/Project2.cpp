#include<iostream>
using namespace std;


int main(){
    float att,pslots,tslots,a,b,c,d,per;
    pslots=225;
    b=40;
    tslots=300;
    cout<<"Enter attendance:"<<endl;
    cin>>att;
    a=(att*b)/100;
    cout<<"You attended"<<a<<"classes out of 40"<<endl;
    c=pslots-a;
    d=tslots-b;
    cout<<"Remaining classes for you to attend"<<endl;
    per=(c/d)*100;

    cout<<c<<endl<<per<<d;
    return 0;

   /*double a,b,c,d;
   cout<<"enter total slots:"<<endl;
   cin>>a;
   cout<<"Enter present slots:"<<endl;
   cin>>b;
   for(double i=a,j=b;i<=219;i++,j++){
    if(j/i >= 0.75){
        c=j;
        d=c-b;
        cout<<d;
        break;
        
    }
   }
   return 0;*/







}