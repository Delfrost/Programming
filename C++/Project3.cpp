#include<iostream>
using namespace std;
int main(){
    int choice;
    char name[100],psswd[100];
   cout<<"Welcome to our app."<<endl;
   cout<<"Select any two options from below."<<endl;
   cout<<"1.Log in"<<endl;
   cout<<"2.Register as new user"<<endl;
   cout<<"Enter your option:"<<endl;
   cin>>choice;
   if (choice=1)
   {
        cout<<"Enter Name:"<<endl;
        cin>>name;
        cout<<"Enter password:"<<endl;
        cin>>psswd;
    }
   else(choice=2);
   {
     int age;
    char name[100],location[100];
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Enter your location"<<endl;
    cin>>location;
    cout<<"Enter your age:"<<endl;
    cin>>age;
}
   
   return 0;
}