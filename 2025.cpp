#include<iostream>
#include<string.h>

using namespace std;

 class Daru
 {
   
     public:
     char name[100];
     int price;

     void display(char naam[100], int money)
     {
        // name[100] = naam[100];
        strcpy(name ,naam);
        
        price = money;

        cout<<name<<endl;
        cout<<price<<endl;
     }
 };

int main()

{
  Daru JK,JR;

  JK.display("Whiskey", 5000);
  JR.display("Whiskey", 5000);
  JK.display("Whiskey", 5000);
  JK.display("Whiskey", 5000);
  JK.display("Whiskey", 5000);
  JK.display("Whiskey", 5000);
  JK.display("Whiskey", 5000);
}