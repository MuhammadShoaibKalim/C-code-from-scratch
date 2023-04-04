/*
Class Task: 
Write a program that show your details by taking from user.
*/

#include<iostream>
#include<string.h>
using namespace std;
int main(){
       string name, id, department, Location;
      long int contact_no;
       cout<<" Enter Your Details Here : "<<endl;
       
       cout<<" Enter your Name :";
       cin>>name;
       
        cout<<" Enter your ID :";
       cin>>id;
       
        cout<<" Enter your Contact No :";
       cin>>contact_no;
       
        cout<<" Enter your Location :";
       cin>>Location;
       
        cout<<" Enter your Department :"<<endl;
       cin>>department;
       
       cout<<"The Details given by user is  given below :"<<endl;
       
       cout<<"The name  is : "<<name<<endl;
       cout<<"The contact_no  is : "<<contact_no<<endl;
       cout<<"The id  is : "<<id<<endl;
       cout<<"The Location  is : "<<Location<<endl;
       
    return 0;
		
}
